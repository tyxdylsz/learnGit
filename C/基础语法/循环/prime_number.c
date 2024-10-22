#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main(int argc, char * argv[])
{
        //判断输入的数是否为大于3的素数(除了1和本身外不可被其他数整除)
        int a;
        puts("please a number for 'a':");
        scanf("%d",&a);
        if(a > 3)
        {
                bool tag = true;
                for(int i = 2; i <= sqrt(a); i++)
                {
                        if(!(a % i))
                        {
                                tag = false;
                                printf("%d可以被%d整除\n",a,i);
                        }
                }
                if(tag == true)
                        printf("%d是大于3的素数\n",a);
                else
                        printf("%d不是大于3的素数\n",a);
        }
        else
                printf("%d不是大于3的数\n",a);
        return 0;
}
