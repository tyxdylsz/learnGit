#include<stdio.h>
int f(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
        return n*f(n-1);
    
}
int main()
{
    int n,Sn = 0;
    scanf("%d",&n);
    while(n >= 1)
    {
        Sn += f(n);
        n--;
    }
    printf("%d\n",Sn);
    return 0;
}
