#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
        int seed;
        scanf("%d",&seed);
        srand(seed);

        printf("%d\n",rand());
        return 0;
}
