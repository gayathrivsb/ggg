#include<stdio.h>
int main()
{
int a,num[20],i,sum=0;
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&num[i]);
}
for(i=0;i<a;i++)
{
if(num[i]<0)
{
sum=sum+num[i];
}
}
printf("The negative number is %d",sum);
return 0;
}
