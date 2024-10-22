#include <stdio.h>

int main(int argc, char * argv[])
{
        int HI = 0;
        int HO = 1;
        #if HI > HO
        printf("HI > HO  为真,HI 最大\n");
        #else
        printf("HI > HO 为假，HO 最大\n");
        #endif
        return 0;
}
