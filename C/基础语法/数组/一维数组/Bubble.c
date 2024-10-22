#include <stdio.h>
#include <stdbool.h>
/*函数：int * bubble_sort(int *)
功能：冒泡排序的函数实现
参数：一维数组
返回值：排序得到的一维数组
*/
void bubble_sort(int * s, int n)
{
        int count = 0;
        for(int i = 0; i < n; i++)
        {
                bool tag = true;
                for(int j = 0; j < n - i; j++)
                {
                        if(s[j] > s[j+1])
                        {
                                int tmp = s[j];
                                s[j] = s[j+1];
                                s[j+1] = tmp;
                                tag = false;
                        }
                }
                count++;
                if(tag == true)
                        break;
        }
        printf("冒泡排序一共进行了%d次\n",count);
}
int main(int argc, char * argv[])
{
        //对一维数组进行冒泡排序 
        int size, i;
        scanf("%d",&size);
        int a[size];
        for(i = 0 ; i < size ; i++ )
        {
                scanf("%d",&a[i]);
        }
        bubble_sort(a,size);
        for(i = 0 ; i < size ; i++ )
        {
                printf("a[%d] = %d\n",i,a[i]);
        }
        return 0;
}
