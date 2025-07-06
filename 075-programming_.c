//Programs to Print Natural Numbers from N to 1
#include<stdio.h>
int main()
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = N; i >= 1; i--)
        {
        printf("%d ", i);
        }
    return 0;
}
