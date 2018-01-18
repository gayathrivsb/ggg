# include<stdio.h>
main()
{
char ch;
printf("enter char:");
scanf("%c",&ch);
if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
{
Printf("alphabet");
}
else
{
printf("not a alphabet");
}
return 0;
}
