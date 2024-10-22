#include <stdio.h>
extern int global_a;
int main()
{
	//寄存器变量
	//register int a = 10;
	// printf("a = %d 地址为： %d\n", a, &a);(x)寄存器变量没有地址，同样也不能用指针
	//static 变量
	/* 不初始化默认值
	static int b;
	printf("%d\n",b);//输出结果为0,static变量默认为0
	*/
	int i = 0;
	static int s = 10;
	while(i < 10)
	{
		static int s = 0;
		printf("%d\n",s);
		s++;
		i++;
	}
	s++;
	printf("s = %d\n",s);
	printf("global_a = %d\n",global_a);

	return 0;
}
