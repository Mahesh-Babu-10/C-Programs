//Program to read rating of three movies of your choice to dispay which is the Hit movie
#include <stdio.h>
int main()
{
    int movie1, movie2, movie3;

    printf("Enter rating for Movie 1 : ");
    scanf("%d", &movie1);

    printf("Enter rating for Movie 2 : ");
    scanf("%d", &movie2);

    printf("Enter rating for Movie 3 : ");
    scanf("%d", &movie3);

    if (movie1 > movie2 && movie1 > movie3 && movie1 > 7)
        printf("Movie 1 is a hit movie!\n");
      else if (movie2 > movie1 && movie2 > movie3 && movie2 > 7)
             printf("Movie 2 is a hit movie!\n");
         else if (movie3 > movie1 && movie3 > movie2 && movie3 > 7)
                printf("Movie 3 is a hit movie!\n");
            else
                printf("No hit movie found based on ratings.\n");

    return 0;
}
