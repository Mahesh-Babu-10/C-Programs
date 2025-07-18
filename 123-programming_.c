//Program To Print The Second Word From The innputted String
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i = 0, wordCount = 0, start = -1, end = -1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0')
        {
          while (str[i] == ' ') i++;

          if (str[i] != '\0')
            {
              wordCount++;

            if (wordCount == 2)
                start = i;

            while (str[i] != ' ' && str[i] != '\0')
                {
                  if (wordCount == 2)
                    end = i;
                i++;
            }
        }
    }

    if (start != -1 && end != -1)
       {
        printf("Second word: ");
        for (i = start; i <= end; i++)
          {
            printf("%c", str[i]);
          }
        printf("\n");
       }
          else
            {
              printf("Second word not found.\n");
            }

    return 0;
}
