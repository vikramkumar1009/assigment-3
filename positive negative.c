/*Write a program to check whether a given number is an even number or an odd number without using % operator.*/
#include<stdio.h>
main()
{
    int x,result;

    printf("Enter any number\n");
    scanf("%d",&x);
    result=x&1;
    if(result!=0)
    {
        printf("number is odd");

    }
    else
    {
        printf("number is even");

    }
    return 0;
}
