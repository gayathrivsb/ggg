#include<iostream.h>
main()
{
int a;
cin>>a;
while(a>0)
{
a=a%10;
cout<<a;
a=a/10;
}
}
