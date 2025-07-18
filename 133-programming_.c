//program To Read Two Strings And Check If They Are Anagram strings Are Not
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void sortString(char str[])
{
    int i, j;
    char temp;
    int len = strlen(str);

    for (i = 0; i < len - 1; i++)
        {
          for (j = i + 1; j < len; j++)
          {
            if (str[i] > str[j])
              {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
              }
           }
          }
}
void preprocess(char str[])
{
    int i, j = 0;
    char temp[100];

    for (i = 0; str[i] != '\0'; i++)
        {
          if (isalpha(str[i]))
          {
            temp[j++] = tolower(str[i]);
          }
        }
    temp[j] = '\0';
    strcpy(str, temp);
}
int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    preprocess(str1);
    preprocess(str2);

    if (strlen(str1) != strlen(str2))
        {
          printf("\n\aThe strings are NOT anagrams.\n");
          return 0;
        }

    sortString(str1);
    sortString(str2);

    if (strcmp(str1, str2) == 0)
        {
          printf("\nThe strings are ANAGRAMS.\n");
        }
          else
            {
              printf("\n\aThe strings are NOT anagrams.\n");
            }

    return 0;
}
