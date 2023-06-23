//Write a program to find the greatest among three given numbers.
// Print number once if the greatest number appears two or three times.
#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter any three number\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>>c)
        printf("%d",a);
    else if(b>c)
        printf("%d",b);
    else
        printf("%d",c);
    return 0;

}
