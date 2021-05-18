#include<stdio.h>
int main()
{
int a,b;
printf("enter the values to swap\n");
scanf("%d%d",&a,&b);
printf("the values before swapping are a=%d,b=%d",a,b);

a=a+b;
b=a-b;
a=a-b;
printf("\nthe values after swapping are a=%d,b=%d",a,b);
return 0;
}
