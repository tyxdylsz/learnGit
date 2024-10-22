#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main(int argc, char * argv[])
{
        //判断输入的数是否为大于3的素数(除了1和本身外不可被其他数整除)
        int a,i = 2;
        puts("please a number for 'a':");
        scanf("%d",&a);
        if(a > 3)
        {
                while(i<=sqrt(a))
                {
                        if(a % i == 0)
                        break;
                        i++;
                }
                if(i <= sqrt(a))
                        printf("%d不是大于3的素数\n",a);
                else
                        printf("%d是大于3的素数\n",a);
        }
        else
                printf("%d不是大于3的数\n",a);
        return 0;
}
