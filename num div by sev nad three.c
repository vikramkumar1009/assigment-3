//Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
main()
{
    int x;
    printf("enter any number\n");
    scanf("%d",&x);
    if(x%3==0&&x%7==0)
    {
        printf("number is divisible by both 3 and 7");
    }
    else if(x%3==0)
    {
        printf("number is divisible by 3");
    }
    else if(x%7==0)
        printf("number divisible by 7");
    else
        printf("numer is not divisible by 3 and 7");
    return 0;
}
