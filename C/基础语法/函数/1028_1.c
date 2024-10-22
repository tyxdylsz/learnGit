#include<stdio.h>
#include <math.h>
void formula()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    int d = b * b - 4 * a *c; 
    float m,n;
    if(d >= 0)
    {
        m = (-b + sqrt(d)) / (2 * a) ;
        n = (-b - sqrt(d)) / (2 * a) ;
        printf("x1=%.3f x2=%.3f\n",m,n);   
    }
    else{ 
        m = -b / (2 * a); n = sqrt(-d)/(2 * a);    
        printf("x1=%.3f+%.3fi x2=%.3f-%.3fi",m,n,m,n);   
    }
}
int main()
{
    formula();
    return 0;
}
