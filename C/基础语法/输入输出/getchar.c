#include <stdio.h>

int main(int argc, char * argv[])
{
        /*
        int c;
        puts("please input a character:");
        c = getchar();
        printf("%c---%d---hex%#x\n",c,c,c );
        */
        int a;
        char b;
        float c;
        scanf("%d%c%f",&a,&b,&c);
        printf("a = %d\n b = %c\n c = %.0f\n",a,b,c);
        return 0;
}
