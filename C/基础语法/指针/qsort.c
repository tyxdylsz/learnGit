#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b)
{
        return (*(int *)a - *(int *)b);
}
/*用qsort完成对整形数组的排序*/
int main(int argc, char * argv[])
{
        int arr[10];
        for(int i = 0; i < 10; i++)
        {
                scanf("%d",&arr[i]);
        }
        /*函数原型：void qsort(void * base, size_t num, size_t size,
                               void * compar(const void *, const void*))
         */
        qsort(arr,10,sizeof(int),compare);
        for(int i = 0; i < 10; i++)
        {
                printf("arr[%d] = %d\n",i,arr[i]);
        }

        return 0;
}
