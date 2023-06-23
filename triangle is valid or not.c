//Write a program which takes the length of the sides of a triangle as an input.
// Display whether the triangle is valid or not.
#include<stdio.h>
main()
{
    int x,y,z;
    printf("enter the length of triangle to check whether the triengle is valid or not\n");
    scanf("%d%d%d",&x,&y,&z);
    printf("sides of triange \n x is %d\n y is %d \n z is %d\n",x,y,z);

    if(x+y>z&&x+z>y&&y+z>z)
    {
        printf("triangle is valid");
    }
    else
    {
        printf("%triangle is not valid");
    }

    return 0;
}
