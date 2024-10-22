#include <stdio.h>

int main(int argc, char * argv[])
{
        int i = 0,sum = 0;
        while(i < 10)
        {
                if(i == 5)
                {
                        i++;
                        continue;
                }
               sum += i;
                i++;
        }
        printf("%d\n",sum);
        return 0;
}
