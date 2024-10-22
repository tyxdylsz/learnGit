#include <stdio.h>
#include <math.h>

int main(int argc, char * argv[])
{
        float a , b ,c;
        puts("please input three for a , b and c:");
        scanf("%f%f%f",&a,&b,&c);
        if(a + b <= c || a + c <= b || b + c <= a) 
        {
                puts("please input three correct numbers:");
        }
        else
        {
                float p = (a + b + c) / 2;
                double s = sqrt(p * (p-a) * (p-b) * (p-c));
                printf("边长为%.2f,%.2f,%.2f的三角形面积为：%.2f\n",a,b,c,s);
        }
        return 0;
}
