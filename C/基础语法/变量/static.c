#include <stdio.h>
static int count = 0;
static int count = 10;
void StaticVarExample1()
{
	count++;
	printf("%d\n",count);
}
void StaticVarExample2()
{
	count++;
	printf("%d\n",count);
}
int main()
{
	//static 变量
	StaticVarExample1();	
	StaticVarExample2();	
	StaticVarExample1();	
	StaticVarExample2();	
	StaticVarExample1();	
	StaticVarExample2();	

	return 0;
}
