/*
        要求：输入n个整数到一个长度为n的数组中，并逆转其中元素
*/
#include <stdio.h>
#include <string.h>
int main(int argc, char * argv[])
{
        int n,i,j;
        scanf("%d",&n);
        int a[n];
        memset(a,0,n);
        for(i = 0; i < n ;i++)
        {
                scanf("%d",&a[i]);
        }
        //进行逆置
        for(i = 0, j = n-1; i < j; i++, j--)
        {
                int tmp  = a[i];
                a[i] = a[j];
                a[j] = tmp;
        }
        //输出数组元素
        for(i = 0; i < n; i++)
        {
                printf("a[%d] = %d\n",i,a[i]);
        }
        return 0;
}
