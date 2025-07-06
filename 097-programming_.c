//Program To Print ASCII Chart
#include <stdio.h>
int main()
{
    printf("ASCII Chart:\n");
    printf("--------------\n");
    printf("Code\tCharacter\n");
    printf("--------------\n");

    for (int i = 0; i <= 255; i++)
      {
        if (i < 32 || i == 127)
          {
            printf("%3d\tNon-printable\n", i);
          }
             else
                {
                  printf("%3d\t%c\n", i, i);
                }
          }

    return 0;
}
