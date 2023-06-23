//Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
main()
{
    int x;
    printf("enter any number\n");
    scanf("%d",&x);
    if(x%2==0&&x%3==0)
    {
        printf("number is divisible by both 2 and 3 ");
    }
    else if(x%3==0)
    {
        printf("number is divisible by 3");
    }
    else if(x%2==0)
        printf("number divisible by 2");
    else
        printf("numer is not divisible by 2 and 3");
    return 0;
}
