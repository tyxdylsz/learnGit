#include <stdio.h>

int main(int argc, char * argv[])
{
        //打印9x9乘法表
        puts("while循环实现*************************************");
        int i = 1;
        while(i < 10)
        {
                int j = 1;
                while(j <= i)
                {
                        printf("%d x %d = %d  ", j , i , i * j);
                        j++;
                }
                i++;
                puts("");
        } 
        puts("for循环实现***************************************");
        for(i = 1; i < 10; i++ )
        {
                for(int j = 1; j <= i; j++)
                {
                        printf("%d x %d = %d   ", j , i , i*j);
                }
                puts("");
        }
        puts("do...while实现*************************************");
        i = 0;
        do{

                i++;
                int j = 0;
                do{
                        j++;
                        printf("%d x %d = %d  ",j , i , i * j);
                }while(j < i); 
                puts("");
        }while(i < 9 );
        puts("goto实现*******************************************");
        i = 1;
loop:
        if(i < 10)
        {
                int j = 1;
start:
                if(j <= i)
                {
                        printf("%d x %d = %d  ",j , i , i * j);
                        j++;
                        goto start;
                }
                i++;
                puts("");     
                goto loop;
        }
        return 0;
}
