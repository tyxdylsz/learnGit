#include <stdio.h>
#include <string.h>
//大小写字符转换函数的实现
char A_a(char a)
{
	if(a >= 'a' && a <= 'z')
	{
		return a - ' ';
	}
	else if(a >= 'A' && a <= 'Z')
	{
		return a + ' ';
	}
	else
		printf("%c并不是英文字母!\n",a);
	return 0;
}
int main()
{
	/*
	const int a = 0x12345678;
	const float b = 3.5e+10;
	const float c = 3.5e-10;
	//a++; const修饰了a，a就是常量不可被修改 
	printf("%d %x %o\n");
	printf("%f\n",b);
	printf("%f\n",c);
	*/
	//字符常量
	/*
        const char a = 'F';
	const char b = 'A' + 2;
	const char c = ' ' + 'B';
	const char d = 'b' - 32;
	const char e = '0';
	const char f = '9';
	const char g = 'a';
	const char h = 'z';
	const char m = 'A';
	const char n = 'Z';
	printf("%c , %d\n",a,a);
	printf("%c , %d\n",b,b);
	printf("%c , %d\n",c,c);
	printf("%c , %d\n",d,d);
	printf("%d\n",e);
	printf("%d\n",f);
	printf("%d\n",g);
	printf("%d\n",h);
	printf("%d\n",m);
	printf("%d\n",n);
	printf("%c - %c = %d\n",h,g,h - g);
	printf("%c - %c = %d\n",n,m,n - m);
	printf("%c - %c = %d\n",g,m,g - m);
	printf("%c - %c = %d\n",h,n,h - n);
	char a;
	puts("请输入一个值：");
	scanf("%c",&a);
	char b = A_a(a);
	if(b){
		printf("%c转换之后为%c\n",a,b);
	}
	*/
	//字符串常量 字符串以'\0'组成
	char arr1[] = {"abc"};
	char arr2[] = {'a','b','c','\0' };
	printf("%ld  %ld\n",sizeof(arr1),sizeof(arr2));
	printf("%s  %s\n",arr1,arr2);

	return 0;
}
