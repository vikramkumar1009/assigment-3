//Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
main()
{
    int year;
    printf("enter any year in yyyy format\n");
    scanf("%d",&year);
    if(year%4==0)
      printf("is a leap year",year);
    else
    printf(" is not a leap year");
    return 0;
}
