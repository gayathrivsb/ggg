#include<stdio.h>
int main()
{
float n,m,p,q;
scanf("%f%f\n",&n,&m);
p=n*m;
printf("product is %f\n",p);
for(q=0;q<=p;q++)
{
   if(p/q==q)
   {
printf("perfect square\n");
}
}
return 0;
}
