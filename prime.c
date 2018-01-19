#include<stdio.h>
main()
{
int a,i,count=0;
scanf("%d",&a);
for(i=0;i<=a;i++)
{
if(a/i==0)
{
count++;
}
if(count==2)
{
printf("prime");
}
else
{
printf("not a prime");
}
}
}
