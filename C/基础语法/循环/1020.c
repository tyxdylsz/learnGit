#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i = 1,m = 1;
    while(i < N)
    {
        m = 2 * (m + 1);
        i++;
    }
    printf("%d\n",m);
    return 0;
}
