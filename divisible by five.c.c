//Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
main()
{
    int a;
    printf("enter any number\n");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("number is divisible by 5");
    }
    else
        printf("number is not dividible by 5");
    return 0;
}
