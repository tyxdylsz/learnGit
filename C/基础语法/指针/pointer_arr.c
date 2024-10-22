#include <stdio.h>
#define MAX 10

int main(int argc, char * argv[])
{
        int a[MAX];  
        for(int i = 0; i < MAX; i++)
        {
                scanf("%d",&a[i]);
        }
        int * p;
        p = a;
        for(int i = 0; i < MAX; i++)
        {
                printf("数组第%d个元素的地址为:%X，a[%d]=%d\n",i+1,p+i,i,*(p+i));
                //printf("数组第%d个元素的地址为:%p，a[%d]=%d\n",i+1,p+i,i,*(p+i));
        }
        //printf("数组a的地址为：%p，指针p中内容为%p\n",&a,p);
        //printf("数组a的第一个元素为%d，指针p指向的元素为：%d\n",a[0],*p);
        //通过指针p来修改数组中的值
        //*p = 20;
        //printf("数组a的第一个元素为%d，指针p指向的元素为：%d\n",a[0],*p);
        return 0;
}
