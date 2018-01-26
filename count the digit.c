#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
if(a!=0)
{
count=0;
a=a/10;
count++;
printf("%d",count++);
}
return 0;
}
