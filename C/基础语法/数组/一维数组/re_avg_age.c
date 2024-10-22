#include <stdio.h>

const int N = 5;
int * input(int arr[],int N);
double avg_age(int * arr, int N);
int count(int arr[N],int N,double avg);

int main(int argc, char * argv[])
{
        int arr[N];
        input(arr,N);
        double avg = avg_age(arr,N);
        printf("平均年龄为：%.1lf\n",avg);
        int num = count(arr,N,avg);
        printf("超过平均年龄的人数有：%d\n",num);

        return 0;
}
int * input(int arr[],int N)
{
        int i = 0;
        while(i < N)
        {
                scanf("%d",&arr[i]);
                i++;
        }
        return arr;
}
double avg_age(int * arr, int N)
{
        int i = 0,sum = 0;
        while(i < N)
        {
                sum += arr[i];
                i++;
        }
        return sum / N;
}
int count(int arr[N],int N,double avg)
{
        int i = 0 , num = 0;
        while(i < N)
        {
                if(arr[i] > avg)
                {
                        num++;
                }
                i++;
        }
        return num;
}
