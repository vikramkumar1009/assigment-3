//Write a program to take marks of 5 subjects from the user.
//Assume marks are given out of 100 and passing marks is 33.
// Now display whether the candidate passed the examination or failed.
#include<stdio.h>
main()
{
    int a,b,c,d,e;
     printf("enter five subject number to check wheather the student are pass or fail\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("marks in subject are \na is %d\nb is %d\nc is %d\nd is %d\ne is %d\n",a,b,c,d,e);

    if(a>=33&&b>=33&&c>=33&&d>=33&&e>=33)
    {
        printf(" student is pass ");
    }
    else
        printf("student is fail");
    return 0;

}
