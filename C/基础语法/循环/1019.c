#include<stdio.h>
int main()
{
    int n;
    double m;
    scanf("%lf %d",&m,&n);
    double h = m;
    double sum = m;
    int i = 0;
    while( i < n )
    {
        h /= 2;
        sum += h * 2;
        i++;
    }
    sum -= h * 2;
    printf("%.2lf %.2lf\n",h,sum);
    return 0;
}
