//Program to find Biggest of four numbers
#include<stdio.h>
int main()
{
    int a,b,c,d,big;
    a=b=c=d=big=0;

    printf("Enter 4 nos:");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    big=a; //assume

    if(b>big)
        big=b;
        else if(c>big)
                big=c;
            else if(d>big)
                    big=d;

 printf("\nThe Biggest number is:%d\n",big);

    return 0;
}
