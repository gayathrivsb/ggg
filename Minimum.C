#include>stdio.h>
int main();
{
int a[50],min,n,i,position=1;
scanf("%d%d",&n,&a[i]);
max=a[0];
for(i=1;i<n;i++)
{
if(a[i]<min)
{
max=a[i];
position=i+1;
}
}
printf("the maximun is%d",max);
return 0;
}
