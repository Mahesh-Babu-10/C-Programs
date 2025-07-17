//Program To Fill The Array Of 10 Elements With Random Numbers And Sort Them In Ascending Order And Descending Order to Print seperately
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sortAscending(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
        {
          for (int j = i + 1; j < size; j++)
          {
            if (arr[i] > arr[j])
              {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
              }
          }
        }
}
void sortDescending(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
        {
           for (int j = i + 1; j < size; j++)
           {
             if (arr[i] < arr[j])
             {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int arr[10];
    int i;

    srand(time(0));

    printf("Original Random Numbers:\n");
    for (i = 0; i < 10; i++)
        {
          arr[i] = rand() % 100 + 1;
          printf("%d ", arr[i]);
        }

    int ascArr[10], descArr[10];
    for (i = 0; i < 10; i++)
        {
          ascArr[i] = arr[i];
          descArr[i] = arr[i];
        }

    sortAscending(ascArr, 10);
    printf("\n\nSorted in Ascending Order:\n");
    for (i = 0; i < 10; i++)
        {
          printf("%d ", ascArr[i]);
        }

    sortDescending(descArr, 10);
    printf("\n\nSorted in Descending Order:\n");
    for (i = 0; i < 10; i++)
        {
          printf("%d ", descArr[i]);
        }

    return 0;
}
