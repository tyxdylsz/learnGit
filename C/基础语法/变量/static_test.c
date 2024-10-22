#include <stdio.h>
static int j;
void func(int arg)
{
	static int i = arg;
	i++;
	printf(" i = %d\n",i);
}
int StaticVarExample1()
{
	static int i = 0;
	i++;
	return i;
}

int StaticVarExample2()
{
	int j = 0;
	j++;
	return j;
}
int main()
{
/*	j = 100;
	int i , j , k;
	
	for(k = 0; k < 10; k++)
	{
		i = StaticVarExample1();
		j = StaticVarExample2();
	}
	printf("%d %d\n",i,j);
*/
	for(int k = 0; k < 10; k++)
	{
		func(k);
	}
	return 0;
}
