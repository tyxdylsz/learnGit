#include<stdio.h>
#include <string.h>
int f(int a)
{   
    if(a == 1 || a == 2 || a == 3 || a == 4)
    {
        return 1;
    }
    else
        return f(a -1) + f(a - 4);
}
int f1(int b)
{
        if(b == 1)
        {
                return 1;
        }
        else
                return f(b) + f1(b-1);
}
int main()
{
    int a[56],n,i = 0;
    int m = sizeof(a) / sizeof(int);    
    memset(a,0,m);
    scanf("%d",&n);
    while(n)
    {
        a[i] = n;
        i++;
        scanf("%d",&n);
    }
    i = 0;
    while(a[i])
    {
        printf("%d\n",f1(a[i]));
        i++;
    }
    return 0;
}
