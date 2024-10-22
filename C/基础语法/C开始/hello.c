#include <stdio.h>
#include <string.h>
int main()
{
	int a = 10;
        printf("%d\n",a);
	printf("longlong 所占字节数为：%ld\n",sizeof(long long));//结果为8 因为linux为64位，规定long long占8字节，如果计算机是128位，则long long所占字节为16个字节
	printf("long所占字节数为：%ld\n",sizeof(long));;//结果为8 因为linux的64位计算机规定long占用8字节，而32位linux系统则会显示4.
	printf("int所占字节数为：%ld\n",sizeof(int));
	printf("Hello world!\n");
	return 0;
}
