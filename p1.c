#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter a num1:");
    scanf("%d",&a);
    printf("enter a num2:");
    scanf("%d",&b);
    printf("enter a num3:");
    scanf("%d",&c);
    if((a>b)&(a>c))
    {
        printf(" A is greatest");

    }
    else if ((b>a)&(b>c))
    {
        printf("B is greatest");
    }
    else
    {
        printf(" C is greatest");
    
    }
return 0;
}