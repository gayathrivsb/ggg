#include<stdio.h>
int main()
{
	int a,b;
	a=10,b=12;
	printf("before swap a=%d b=%d\n",a,b);
	b=b^a;
	a=b^a;
	b=b^a;
	printf("after swap a=%d b=%d",a,b);
	return 0;
}
