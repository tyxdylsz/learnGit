#include <stdio.h>

typedef struct 
{
        int a : 2;
        int b : 2;
        int c : 1;
}test;
int main(int argc, char * argv[])
{
         test t;
         t.a = 1;
         t.b = 3;
         t.c = 1;
         printf("%d %d %d\n",t.a,t.b,t.c);
         printf("%d\n",sizeof(t));
        return 0;
}
