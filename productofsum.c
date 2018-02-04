#include<stdio.h>
 int main()
{
int n,i,j,pro=1,pro1=1,a[5][5],sum;
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
pro*=a[i][j];
   }
if(j==(n-i+1))
  {
pro1*=a[i][j];
  }
 }
}
sum=pro+pro1;
printf("%d",sum);
return 0;
}
 
