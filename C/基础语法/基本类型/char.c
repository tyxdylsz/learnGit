#include <stdio.h>
#include <string.h>
void printfBinary(unsigned char c);
int main()
{
	unsigned char a = 65;
	unsigned char b = -128;
	char c = 129;
	unsigned char d = -1;
	unsigned char e = 256;
        printf("%d %c\n",a,a);
        printfBinary(a);
	printf("%d %c\n",b,b);
        printfBinary(b);
        printf("%d %c\n",c,c);  
        printfBinary(c);
        printf("%d %c\n",d,d);
        printfBinary(d);
        printf("%d %c\n",e,e);
        printfBinary(e);
	return 0;
}
void printfBinary(unsigned char c) {
    for (int i = 7; i >= 0; i--) {
        putchar((c & (1 << i)) ? '1' : '0');
    }
    putchar('\n'); // 输出换行
}
