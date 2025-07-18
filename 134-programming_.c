//Program To Declare A String And Assign "Happy Programming" And Display It ZigZag Case
#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[] = "Happy Programming";
    int i;

    printf("ZigZag case: ");

    for (i = 0; str[i] != '\0'; i++)
        {
          if (isalpha(str[i]))
           {
            if (i % 2 == 0)
              {
                printf("%c", toupper(str[i]));
              }
                else
                    {
                      printf("%c", tolower(str[i]));
                    }
            }
              else
                {
                  printf("%c", str[i]);
                }
          }

    printf("\n");
    return 0;
}
