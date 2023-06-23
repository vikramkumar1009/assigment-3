//Write a program to print greater between two numbers. Print one number of both are the same
#include<stdio.h>
main()
{
    int x,y;
    printf("Enter any two number\n");
    scanf("%d%d",&x,&y);
    if(x>y)
       printf("%d is greater number", x);
       else if(y>x)
        printf("%d is greater number",y);
       else
        printf("both are equal");

    return 0;
}
