#include <stdio.h>

int main(int argc, char * argv[])
{
        int year;
        puts("please input a number for year:");
        scanf("%d",&year);
        while(year)
        {

                if(!(year % 4))
                {
                        if(year % 100 || year % 400 == 0)
                        {       
                                printf("%d年是闰年!\n",year);
                        }
                        else
                                printf("%d年不是闰年!\n",year);

                }
                else
                        printf("%d年不是闰年!\n",year);
                scanf("%d",&year);
        }
        return 0;
}
