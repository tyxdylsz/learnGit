#include<stdio.h>
#include <math.h>
#include <stdbool.h>
 
int main()
{
    int N;
    scanf("%d",&N);
    int j = 2;
    while(j <= N)
    {
        bool tag = true;
        for(int i = 2; i <= sqrt(j);i++)
        {
            if(j % i == 0)
            {
                tag = false;
            }
        }
        if(tag == true)
        {
            printf("%d\n",j);
        }
        j++;
    }
    return 0;
}
