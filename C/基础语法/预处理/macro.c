#include <stdio.h>
#define MMU(x,y) x##x##x##y
int main(int argc, char * argv[])
{
        int nnnm = 10;
        printf("%d\n",MMU(n,m));
#undef MMU
   //     printf("%d\n",MMU(1,2)); /*上述已经取消MMU的宏定义了所以这里这个语句执行一定会出错*/
         
        return 0;
}
