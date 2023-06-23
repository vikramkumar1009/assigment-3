/*Write a program to check whether a given character is an alphabet (uppercase),
 an alphabet (lower case), a digit or a special character.*/
#include<stdio.h>
main()
{
    char x;
    printf("enter any character\n");
    scanf("%c",&x);
    if(x>='A'&&x<='Z')
    {
        printf("character is in uppercase of alphabet");
    }
    else if(x>='a'&&x<='z')
    {
        printf("character is in lowercase of alphabet");
    }
    else if(x>='0'&&x<='9')
        printf("character is digit");
    else
        printf("character is symbol");
    return 0;
}
