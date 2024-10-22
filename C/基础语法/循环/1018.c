#include<stdio.h>
int main()
{
    int n;
    double a , b , Sn = 0; 
    scanf("%d",&n);
    for(int i = 1; i <= n;i++)
    {
        if(i == 1)
        {
            a = 2;
            b = 1;
        }
        else
        {
            double tmp = a;
            a = a + b;
            b = tmp;
        }
        Sn += a/b;
    }
    printf("%.2lf\n",Sn);
    
    return 0;
}
