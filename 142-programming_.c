//Program To Read Student Name And Any Of The Identity Proof
#include <stdio.h>
#include <string.h>
#define MAX 100
struct Student
{
    char name[50];
    char idProofType;
    char idNumber[30];
};

void readStudent(struct Student *s)
{
    printf("Enter Student Name: ");
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = '\0';

    printf("\nChoose Identity Proof Type:\n");
    printf("a. Aadhar\nb. Passport\nc. PAN No.\nd. Driving Licence No.\n");
    printf("Enter your choice (a/b/c/d): ");
    scanf(" %c", &s->idProofType);
    getchar();

    switch(s->idProofType)
    {
        case 'a': case 'A':
            printf("Enter Aadhar Number: ");
            break;
        case 'b': case 'B':
            printf("Enter Passport Number: ");
            break;
        case 'c': case 'C':
            printf("Enter PAN Number: ");
            break;
        case 'd': case 'D':
            printf("Enter Driving Licence Number: ");
            break;
        default:
            printf("\aInvalid choice!\n");
            exit(0);
            return;
    }

    fgets(s->idNumber, sizeof(s->idNumber), stdin);
    s->idNumber[strcspn(s->idNumber, "\n")] = '\0';
}

void searchByAadhar(struct Student s[], int n, char *aadharNo)
{
    int found = 0;
    for (int i = 0; i < n; i++)
      {
        if ((s[i].idProofType == 'a' || s[i].idProofType == 'A') && strcmp(s[i].idNumber, aadharNo) == 0)
         {
            printf("\nStudent found!\nName: %s\n", s[i].name);
            found = 1;
            break;
         }
     }

    if (!found)
        {
          printf("\nNo student found with Aadhar number: %s\n", aadharNo);
        }
}

int main()
{
    struct Student students[MAX];
    int count;

    printf("Enter number of students: ");
    scanf("%d", &count);
    getchar();

    for (int i = 0; i < count; i++)
      {
        printf("\n--- Enter details for student %d ---\n", i + 1);
        readStudent(&students[i]);
     }

    char searchAadhar[30];
    printf("\nEnter Aadhar number to search for student: ");
    fgets(searchAadhar, sizeof(searchAadhar), stdin);
    searchAadhar[strcspn(searchAadhar, "\n")] = '\0';

    searchByAadhar(students, count, searchAadhar);

    return 0;
}
