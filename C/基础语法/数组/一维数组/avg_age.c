#include <stdio.h>
#include <string.h>

int  avg_age(int *a, int N,double avg);
int main(int argc, char * argv[])
{
        int N,i,sum = 0;
        puts("请输入数组长度：");
        scanf("%d",&N); 
        int a[N];
        memset(a,0,N);
        for( i = 0; i < N; i++)
        {
                scanf("%d",&a[i]);
                sum += a[i];
        }
        double avg = sum / N;
        printf("平均年龄为：%.3lf,班级中大于平均年龄的人有%d个\n",avg,avg_age(a,N,avg));
        return 0;
}
int avg_age(int * a, int N,double avg)
{
        int i,num = 0;
        for(i = 0; i < N; i++)
        {
                if(a[i] > avg)
                {
                        printf("a[%d] = %d\n",i,a[i]);
                        num++;
                }
        }
        return num;
}
