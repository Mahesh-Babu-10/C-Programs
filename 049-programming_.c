//Program to read a character and check whether it is capital letter or lower-case letter or Digit or Special character
#include <stdio.h>
int main()
 {
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
           printf("'%c' is a Capital Letter\n", ch);
        else if (ch >= 'a' && ch <= 'z')
                printf("'%c' is a Lower-case Letter\n", ch);
              else if (ch >= '0' && ch <= '9')
                     printf("'%c' is a Digit\n", ch);
                     else
                         printf("'%c' is a Special Character\n", ch);

    return 0;
}
