#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>
int main()
{
        printf("%ld %ld %ld %ld %ld\n",sizeof(bool),sizeof(char),sizeof(int),
			             sizeof(short),sizeof(long));
	printf("char: %d - %d\n",SCHAR_MIN,SCHAR_MAX);
	printf("short: %d - %d\n",SHRT_MIN,SHRT_MAX);
	printf("int: %d - %d\n",INT_MIN,INT_MAX);
	return 0;
}
