
#include <stdio.h>

main ()
{
    int a,b,c=0;
    printf("Please enter the number to swap :");
    scanf("%d",&a);
    while (a>=1)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    printf("Reverse =%d",c);
}
