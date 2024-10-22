#include<stdio.h>
#include <math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i = 0;
    if(a >= 0 && a < 10)
        i = 1;
        else if( a < 100)
            i = 2;
            else if(a < 1000)
                i = 3;
                else if(a < 10000)
                    i = 4;
                    else
                        i = 5;
    printf("%d\n",i);
    int sum = 0, c = a,d = a;
    i--;
    while(c)
    {
       int m = d / (int)pow(10,i);
       d -= m * (int)pow(10,i);
        printf("%d ", m);
        sum = sum * 10 + c % 10;
        c = c /10;
        i--;
    }
    puts("");
    printf("%d\n",sum);
    return 0;
}
