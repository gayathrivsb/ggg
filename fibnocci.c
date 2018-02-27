#include <stdio.h>
    int main(void) 
    {
    int a=0,b=1,k,n,i;
     scanf("%d",&n);
     printf("%d\t%d",a,b);
     for(i=2;i<=n;i++)
    {
      k=a+b;	
      printf("\t%d\t",k);
      a=b;
      b=k;
    }
    	return 0;
    }
