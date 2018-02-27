#include<stdio.h>
int main()
{
	int a,b,temp;
	a=10,b=12;
	printf("before swap a=%d b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after swap a=%d b=%d",a,b);
	return 0;
}
