#include <stdio.h>

int main()
{
	int sum = 0;
	for(int i = 0; i <= 10; i++)
	{
		sum += i;
	}
	printf("1 + 2 + 3 + ... + 10 = %d\n",sum);
	return 0;
}
