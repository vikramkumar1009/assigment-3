//Write a program which takes the cost price and selling price of a product from the user.
//Now calculate and print profit or loss percentage
#include<stdio.h>
main()
{
    int cp,sp;
    int p,pp;
    printf("enter cp and sp to find profit and loss\n");
    scanf("%d%d",&cp,&sp);
    printf("cp is %d and sp is %d\n",cp,sp);
    p=sp-cp;
    pp=p*100/cp;
    if(sp>cp)
    {
        printf("profit percentage is %d",pp);

    }
    else
    {
       printf("loss percentage is %d ",pp);
    }

    return 0;

}
