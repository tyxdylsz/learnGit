#include<stdio.h>
int main()
{
    /*
    *对数组a[10]中插入一个数据思路：
    *数组0～8有数据，然后需要向其中插入一个数据
    */
    int a[10];
    int i = 0;
    while(i < 9)
    {
        scanf("%d",&a[i++]);
    }
    int m;
    scanf("%d",&m);
    i = 0;
    while(i < 9)
     {
             if(m < a[i++])
                     break;
     }
     if(i == 9 && m > a[8])
     {
             a[9] = m;
     }
     else
     {
             i -= 1;
             int j;
             for(j = 8;j >= i; j--)
             {
                a[j + 1] = a[j];
             }
             a[j + 1] = m;
     }
     i = 0;
     while( i < 10)
     {
             printf("%d\n",a[i++]);
     }
    return 0;
}
