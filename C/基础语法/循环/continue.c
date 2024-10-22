#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(int argc, char* argv[])
{
    //判断输入的数是否为大于3的素数(除了1和本身外不可被其他数整除)
    int a, i = 2;
    puts("please a number for 'a':");
    
    while (1)
    {
        if (scanf("%d", &a) == 0 || ceil(a) != floor(a))
        {
            while (getchar() != '\n');
            puts("Input wrongly,please input a right number:");
            continue;
        }
        if(a <= 3)
            break;
        while (i <= sqrt(a))
        {
            if (a % i == 0)
                break;
            i++;
        }
        if (i <= sqrt(a))
            printf("%d不是大于3的素数\n", a);
        else
            printf("%d是大于3的素数\n", a);
        i = 2;
        
    }
    return 0;
}

