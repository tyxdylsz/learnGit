#include <stdio.h>

int main(int argc, char * argv[])
{
	unsigned char a = 0xe4, b;
	b = a << 3;
	printf("%#x\n",b);

    return 0;
}
