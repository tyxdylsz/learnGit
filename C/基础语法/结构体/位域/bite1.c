#include <stdio.h>

typedef struct a{
        unsigned char b : 4;
        unsigned char :2;
        unsigned char c : 4;
        unsigned int d : 20;
}a;
int main(int argc, char * argv[])
{
         a a1;
         printf("%ld\n",sizeof(a1));
        return 0;
}
