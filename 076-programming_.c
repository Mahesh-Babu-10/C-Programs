//Program to Read A Name To Display Length Many Times Along With Serial Number
#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    int times, i;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    size_t len = strlen(name);
    if(name[len - 1] == '\n')
        {
        name[len - 1] = '\0';
        len--;
        }

    printf("Enter how many times to display: ");
    scanf("%d", &times);

    printf("\n--- Output ---\n");

    for(i = 1; i <= times; i++)
        {
        printf("%d. Name: %s | Length: %zu\n", i, name, strlen(name));
        }

    return 0;
}
