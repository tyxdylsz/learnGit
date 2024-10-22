#include <stdio.h>

double add(double , double );
double sub(double , double );
double mul(double , double );
double div(double , double );


int main(int argc, char * argv[])
{
        double (*ptr[4]) (double,double) = {add , sub , mul , div};
        char * str[4] = {"和","差","积","商"};
        double x , y;
        scanf("%lf%lf",&x,&y);
        for(int i = 0;i < 4; i++)
        {
              /* switch (i)
               {
               case 0:
                     printf("%.2lf + %.2lf = %.2lf\n",x,y,(*ptr[i])(x,y));
                     break;
               case 1:
                     printf("%.2lf - %.2lf = %.2lf\n",x,y,(*ptr[i])(x,y));
                     break;
               case 2:
                     printf("%.2lf * %.2lf = %.2lf\n",x,y,(*ptr[i])(x,y));
                     break;
               case 3:
                     printf("%.2lf / %.2lf = %.2lf\n",x,y,(*ptr[i])(x,y));
                     break;
               }*/
               printf("%s:%6.2lf\n",str[i],(*ptr[i])(x,y));

        }
         
        return 0;
}
double add(double x, double y)
{
        return x+y;
}
double sub(double x, double y)
{
        return x-y;
}
double mul(double x, double y)
{
        return x * y;
}
double div(double x, double y)
{
        return x / y;
}
