//Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
main()
{
    char x;
    printf("enter any alphabet digit\n");
    scanf("%c",&x);
    if(x>='A'&&x<='Z')
    {
        printf("alphabet is in uppercase");
    }
    else if(x>='a'&&x<='z')
    {
        printf("alphabet is in lowercase");
    }
    else
        printf("error");
    return 0;
}
