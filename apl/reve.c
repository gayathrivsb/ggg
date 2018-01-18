#include<stdio.h>
main()
{
int a;
scanf("%d",&a);
while(a>0)
{
a=a%10;
printf("%d",a);
a=a/10;
}
}
