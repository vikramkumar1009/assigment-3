//Write a program which takes the month number as an input and display number of days in that month
#include<stdio.h>
main()
{
    int x;
    printf("enter month number to display number of days\n");
    scanf("%d",&x);
    printf("month number %d \n",x);

    if(x==1)
    {
        printf("\n31 days");
    }

     else if(x==2)
    {
       printf("\n28 days but in leap a year 29 days");
    }
     else if(x==3)
    {
       printf("\n31 days");
    }
    else if(x==4)
    {
       printf("\n30 days");
    }
    else if(x==5)
    {
       printf("\n31 days");
    }
    else if(x==6)
    {
       printf("\n30 days");
    }
        else if(x==7)
    {
       printf("\n31 days");
    }
    else if(x==8)
    {
       printf("\n31 days");
    }
    else if(x==9)
    {
       printf("\n30 days");
    }
    else if(x==10)
    {
       printf("\n31 days");
    }
    else if(x==11)
    {
       printf("\n30 days");
    }
    else if(x==12)
    {
       printf("\n31 days");
    }

    return 0;
}
