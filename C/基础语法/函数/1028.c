#include<stdio.h>
#include <math.h>
int main()
{
   float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float d = b * b - 4 * a *c; 
    printf("d = %f\n",d);
    float m,n;
    if(d >= 0)
    {
        m = (-b + sqrt(d)) / (2 * a) ;
        n = (-b - sqrt(d)) / (2 * a) ;
        printf("x1=%.3f x2=%.3f\n",m,n);   
    }
    else{ 
        m = -b / (2 * a); n = sqrt(-d)/(2 * a);    
        printf("m = %f,n = %f\n",m,n);
        printf("x1=%.3f+%.3fi x2=%.3f-%.3fi\n",m,n,m,n);   
    
    }
    return 0;
}
