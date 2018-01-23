#include <stdio.h>
#include <string.h>
 
int main()
{
    char s1[200];
    int  a;
 
    printf("enter the string\n");
    scanf("%s", s1);
    for (a = 0;s1[a] != 0;a++)
    {
    count=0;
        if (s1[a] == ' ')
            count++;    
    }
    printf("number of words in given string are: %d\n", count + 1);

return 0;
}
