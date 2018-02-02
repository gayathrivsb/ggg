

#include<stdio.h>
 int main()
{
int n,i,j,sum1=0,sum2=0,a[5][5],pro;
scanf("%d",&n);
for(i=1;i<=n;i++)
 {
for(j=1;j<=n;j++)
  {
scanf("%d",&a[i][j]);
  }
 }
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
 {
if(i==j)
   {
sum1+=a[i][j];
printf("%d",sum1);
   }
if(j==(n-i+1))
  {
sum2+=a[i][j];
printf("%d",sum2);
  }
 }
}
pro=sum1*sum2;
printf("%d",pro);
return 0;
}

