//Progam to Read Name and Aadhar Number of the Person to  Display the Following Message for the valid and Invalid Aadhar no.s
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isValidAadhaar(const char *aadhar)
{
    int len = strlen(aadhar);
    if (len != 12)
    {
        return 0;
    }

    if (aadhar[0] == '0' || aadhar[0] == '1')
        {
        return 0;
       }

    for (int i = 0; i < len; i++)
        {
        if (!isdigit(aadhar[i]))
         {
            return 0;
        }
         }
    return 1;
}
int main()
{
    char name[50];
    char aadhar[13];

    printf("Enter the name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    printf("Enter the Aadhaar number: ");
    scanf("%12s", aadhar);

    if (isValidAadhaar(aadhar))
        {
           printf("Hello %s, your Aadhaar number %s is valid.\n", name, aadhar);
        }

           else
              {
                printf("Hello %s, your Aadhaar number %s is invalid.\n", name, aadhar);
             }

    return 0;
}
