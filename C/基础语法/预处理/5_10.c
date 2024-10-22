#include <stdio.h>
int funa(int a)
{
        int b = 0;
        static int c = 3;
        a = c++, b++;
        return (a);
}
int main(int argc, char * argv[])
{
        int a = 2, i, k;
        for(i = 0; i < 2; i++ )
                k = funa(a++);
        printf("%d\n",k);
        return 0;
}
