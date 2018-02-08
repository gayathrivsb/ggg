#include<stdio.h>
int main()
{
 char s[40],i=0,j=0,k=0,a1[40],a2[30];
 scanf("%s",s);
 for(i=0;s[i]!='\0';i++)
 {
 if(i%2==0)
 {
 a1[j]=s[i];
 j++;
 }
  else
 {
 a2[k]=s[i];
 k++;
 }
 }
puts(a1);
puts(a2);
 return 0;
 }
 
 
