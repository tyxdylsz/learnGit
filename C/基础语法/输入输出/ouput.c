#include <stdio.h>

int main(int argc, char * argv[])
{
	//printf格式输出
	/*
	int a = 567;
	printf("%d\n",a);	
	a = 255;
	printf("%#x\n",a);	
	a = 65;
	printf("%#o\n",a);	
	a = 567;
	printf("%u\n",a);	
	a = -567;
	printf("%u,%#x\n",a,a);	
	char b = 65;
	printf("%c\n",b);	
		
	float c = 123.87384;
	printf("%f---%e---%g\n",c,c,c);
	printf("%f---%e---%g\n",c * 2.1,c * 2.1,c *2.1);
	printf("%%\n");
	*/
	//附加格式说明符号m ,n , - , + , 0 , # , l(例如：%ld输出为long int数据)	
	double a = 1234.98765;
	printf("%f\n",a); 
	printf("%12f\n",a); 
	printf("%012f\n",a); 
	printf("%8.2f\n",a); //m为8（限制输出数据长度为8位） n为2（限制保留2位小数）
	int b = 10;
	printf("%#x\n",b);
	//对字符串进行m.n操作
	char s[] = "Hello,world!";
	printf("s的长度为：%ld\n",sizeof(s));
	printf("%15s\n %10.5s\n %2.5s\n %5.5s\n %.5s\n %s\n",s,s,s,s,s,s);
		
	int x = 123;
	printf("%08d\n",x);    	
	printf("%0+8d\n",x);    	
	printf("%02d\n",x);    	
	return 0;
}
