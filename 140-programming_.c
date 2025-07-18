//Program That Maintains A Catalog Of Books
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Book
{
    int bookid;
    char title[100];
    char author[100];
    int noofpages;
    float price;
    int publication_year;
};

union SearchKey
{
    int bookid;
    char str[100];
};

#define FILENAME "books.dat"
void addBook()
{
    struct Book b;
    FILE *fp = fopen(FILENAME, "ab");

    if (fp == NULL)
        {
          printf("Error opening file!\n");
          return;
        }

    printf("\nEnter book ID: ");
    scanf("%d", &b.bookid);
    getchar();

    printf("Enter title: ");
    fgets(b.title, sizeof(b.title), stdin);
    b.title[strcspn(b.title, "\n")] = '\0';

    printf("Enter author: ");
    fgets(b.author, sizeof(b.author), stdin);
    b.author[strcspn(b.author, "\n")] = '\0';

    printf("Enter number of pages: ");
    scanf("%d", &b.noofpages);

    printf("Enter price: ");
    scanf("%f", &b.price);

    printf("Enter publication year: ");
    scanf("%d", &b.publication_year);

    fwrite(&b, sizeof(b), 1, fp);
    fclose(fp);

    printf("Book added successfully!\n");
}

void displayBooks()
{
    struct Book b;
    FILE *fp = fopen(FILENAME, "rb");

    if (fp == NULL)
        {
          printf("No books to display.\n");
          return;
        }

    printf("\n--- Book Catalog ---\n");
    while (fread(&b, sizeof(b), 1, fp))
        {
          printf("\nBook ID: %d\nTitle: %s\nAuthor: %s\nPages: %d\nPrice: %.2f\nPublication Year: %d\n",
               b.bookid, b.title, b.author, b.noofpages, b.price, b.publication_year);
        }

    fclose(fp);
}

void searchBook()
{
    struct Book b;
    FILE *fp = fopen(FILENAME, "rb");
    int choice, found = 0;
    union SearchKey key;

    if (fp == NULL)
        {
          printf("No books found.\n");
          return;
        }

    printf("\nSearch by:\n1. Book ID\n2. Title\n3. Author\nEnter choice: ");
    scanf("%d", &choice);
    getchar();

    if (choice == 1)
        {
          printf("Enter Book ID: ");
          scanf("%d", &key.bookid);
        }
         else
            {
              printf("Enter text: ");
              fgets(key.str, sizeof(key.str), stdin);
              key.str[strcspn(key.str, "\n")] = '\0'; // Remove newline
             }

    printf("\n--- Search Results ---\n");

    while (fread(&b, sizeof(b), 1, fp))
        {
          if ((choice == 1 && b.bookid == key.bookid) ||
            (choice == 2 && strcasecmp(b.title, key.str) == 0) ||
            (choice == 3 && strcasecmp(b.author, key.str) == 0))
            {
               printf("\nBook ID: %d\nTitle: %s\nAuthor: %s\nPages: %d\nPrice: %.2f\nYear: %d\n",
                   b.bookid, b.title, b.author, b.noofpages, b.price, b.publication_year);
            found = 1;
            }
        }

    if (!found)
        {
          printf("No matching book found.\n");
        }

    fclose(fp);
}
void updateBook()
{
    struct Book b;
    int id, found = 0;
    float newPrice;
    FILE *fp = fopen(FILENAME, "rb+");

    if (fp == NULL)
        {
          printf("File not found.\n");
          return;
        }

    printf("Enter Book ID to update price: ");
    scanf("%d", &id);

    while (fread(&b, sizeof(b), 1, fp))
      {
        if (b.bookid == id)
        {
            printf("Current price: %.2f\n", b.price);
            printf("Enter new price: ");
            scanf("%f", &newPrice);
            b.price = newPrice;

            fseek(fp, -sizeof(b), SEEK_CUR);
            fwrite(&b, sizeof(b), 1, fp);
            printf("Book price updated.\n");
            found = 1;
            break;
        }
    }

    if (!found)
        {
          printf("Book ID not found.\n");
        }

    fclose(fp);
}

int main()
{
    int choice;

    do {
        printf("\n==== Book Catalog Menu ====\n");
        printf("1. Add New Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book\n");
        printf("4. Update Book Price\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: updateBook(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
