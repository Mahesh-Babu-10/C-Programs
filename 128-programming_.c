//Program To Read 10 Numbers And Display The Longest Name Along With Its Length And Position
#include <stdio.h>
#include <string.h>
int main()
{
    char names[10][100];
    int i, maxLen = 0, position = -1;

    printf("Enter 10 names:\n");
    for (i = 0; i < 10; i++)
      {
        printf("Name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0';

        int len = strlen(names[i]);
        if (len > maxLen)
            {
              maxLen = len;
              position = i;
            }
      }

    printf("\nLongest name: %s\n", names[position]);
    printf("Length: %d\n", maxLen);
    printf("Position: %d\n", position + 1);

    return 0;
}
