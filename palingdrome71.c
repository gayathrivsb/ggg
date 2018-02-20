#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20],i;
	a[20]="lappal";
	strcpy(b,a);
	strrev(a);
	i=strcmp(b,a);
	if(i==0)
	{
		printf("palindrome");
		else
		printf("not a palindrome");
	}
	
	return 0;
}
