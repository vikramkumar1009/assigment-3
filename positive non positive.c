//Write a program to check whether a given number is positive or non-positive
#include<stdio.h>
main()
{
    int x;
    printf("enter any number ");
    scanf("%d",&x);
    if(x<0)
    {
        printf("number is non positive");

    }
    else
        printf("number is positive");
        return 0;
}
