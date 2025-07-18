//Program To Create A with a countVisitors() function that uses the static storage class to keep track of the total number of website visitors. Demonstrate its functionality by calling the function ten times in the main and displaying the visitor count after all the function calls
#include <stdio.h>
void countVisitors()
{
    static int visitorCount = 0;
    visitorCount++;
}
int getVisitorCount()
{
   return 0;
}

int countVisitorsWithReturn()
{
    static int visitorCount = 0;
    visitorCount++;
    return visitorCount;
}

int main()
{
    int i, currentCount = 0;

    for (i = 0; i < 10; i++) {
        currentCount = countVisitorsWithReturn();
    }

    printf("Total number of website visitors: %d\n", currentCount);

    return 0;
}
