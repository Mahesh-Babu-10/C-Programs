//Program to read a character and check whether it is vowel or consonant for any input other than alphabet display "Invalid Input"
#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Check if it is a vowel
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("'%c' is a Vowel\n", ch);
        } else {
            printf("'%c' is a Consonant\n", ch);
        }
    } else {
        printf("\aInvalid Input\n");
    }
    return 0;
}
