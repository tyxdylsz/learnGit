#include <stdio.h>
#include <string.h>
#define ONE 1
#define TWO (ONE+ONE)

int main()
{
	int a = 10, b = 20;
	int c = a + b + ONE + TWO ;
	int d = a * TWO + b * ONE + ONE;
       	printf("c = %d , d = %d\n", c, d);	
	return 0;
}
