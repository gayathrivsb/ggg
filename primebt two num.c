#include<stdio.h>
int main()
{
int a,b,j,i,count=0;
scanf("%d",&a);
for(i=a;i<=b;i++)
{
for(j=1;j<50;j++)
{
if(i%j==0)
{
count ++;
}
}
}
if(count==2)
{
printf("prime");
}
else
{
printf("not a prime");
}
return 0;
}
