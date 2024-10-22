#include <stdio.h>
#include <string.h>
#define water_m 3.0e-23
#define water_g 950
int main()
{
	float a;
	puts("请输入水的夸脱数：");
	scanf("%f",&a);
        printf("%0.2f夸脱水有%0.2fg\n",a,a * water_g / water_m);
        printf("%0.2f夸脱水有%0.2eg\n",a,a * water_g / water_m);
	return 0;
}
