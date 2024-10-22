#include<stdio.h>
int main()
{
    int a[10];
    int i = 0;
    while( i < 10)
    {
        scanf("%d",&a[i++]);
    }
    while(i-- > 0)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
