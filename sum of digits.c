#include<stdio.h>
int main()
{
int num,sum=0;
printf("enter the number:");
scanf("%d",&num);
whle(num!=0)
{
sum+=num%10;
num=num/10;
}
printf("sum of the number =%d",sum)
}
return 0;
}
