#include <stdio.h>
#include <math.h>

int main(int argc, char * argv[])
{
        int a,b,c;
        puts("please three numbers for a,b and c:");
        scanf("%d%d%d",&a,&b,&c);
        if(sqrt(b * b -4 * a * c) >= 0){
                int x1 = (-b + sqrt(b * b - 4 * a *c))/(2 * a);
                int x2 = (-b - sqrt(b * b - 4 * a *c))/(2 * a);
                printf("%dx^2+%dx+%d=0的解为：x1 = %d,x2 = %d\n",a,b,c,x1,x2);
        }
        else
                puts("输入的数得到结果为复数");
        return 0;
}
