//Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
main()
{
    int x;
    printf("enter any number\n");
    scanf("%d",&x);
    if(x>0)
    {
        printf("number is positive");
    }
    else if(x<0)
    {
        printf("number is negative");
    }
    else if(x==0)
        printf("number is zero");
    else
        printf("numer is not divisible by 3 and 7");
    return 0;
}
