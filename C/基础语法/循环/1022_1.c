#include<stdio.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d",&N);
    int i = 2;
    while(i <= N)
    {
        int j;
        for(j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
            {
                break;
            }
        }
        if( i % j)
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}
