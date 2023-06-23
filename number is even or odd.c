/*Write a program to check whether a given number is an even number or an odd number.*/
#include<stdio.h>
main()
{
    int x;
    printf("Enter any number\n");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("number is even");
    }
    else
        printf("number is odd");
    return 0;
}
