#include <stdio.h>

int main(int argc, char * argv[])
{
        //打印所有水仙花数，水仙花是三位数字，各个数字的立方和就是水仙花本身
        int flower = 100;
        while(flower < 1000)
        {
                int a[3] = {0};
                a[0] = flower % 10 ;
                a[1] = (flower / 10 ) % 10;
                a[2] = flower /100;
                int sum = a[0] * a[0] * a[0] + a[1] * a[1] * a[1] + a[2] * a[2] *a[2];   
                if(sum == flower)
                {
                        printf("%d是水仙花数\n",flower);
                }
                flower++;
        }
        return 0;
}
