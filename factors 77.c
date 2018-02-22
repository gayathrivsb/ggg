#include <stdio.h>
int main()
{
    int i, num;
    scanf("%d", &num);
    printf(" factors of are:%d\n" ,num);
    for(i=1; i<=num; i++)
    {
        if(num % i == 0)
        {
            printf("%d\n",i);
        }
    }
}
