#include<stdio.h>
int main()
{
int a,n,fact=1;
scanf("%d",&n);
for(a=1;a<=n;a++)
{
fact=fact*a;
}
printf("factorial is%d=%d",n,fact);
return 0;
}

