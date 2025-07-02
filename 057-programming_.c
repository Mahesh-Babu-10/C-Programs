//Program to check whether the inputted character is a vowel or a consonent
#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    char lowercase_ch = tolower(ch);

    if (lowercase_ch == 'a' || lowercase_ch == 'e' || lowercase_ch == 'i' || lowercase_ch == 'o' || lowercase_ch == 'u')
    {
        printf("%c is a Vowel.\n", ch);
    }
      else if (islower(ch) || isupper(ch))
    {
        printf("%c is a Consonant.\n", ch);
    }
        else
    {
        printf("\a%c is not an Alphabet.\n", ch);
    }

    return 0;

}
