#include <stdio.h>

int main(int argc, char * argv[])
{
        /*思路：
                第一步：找出完数
                  1.1、第一层for循环，遍历1～n所有数字a（这里例如a）
                  1.2、 第二层for循环，从用a对1～a-1除余，结果为0的相加得到sum
                  1.3、第二层循环结束后，判断sum是否与a相等，如果相等a为完数
                第二步：将完数所有除本身之后的因子打印出来
                    2.1、先输出 "? its factors are"
                    2.2、和1.2一样，这个时候是打印出所有因子，
                        注意：1、题目是输出（‘ ’+因子）的形式
                              2、for循环结束之后需要一个还行
        */
        int n;
        scanf("%d",&n);
        for(int i = 1;i < n; i++)
        {
                int sum = 0;
                for(int j = 1; j < i; j++)
                {
                        if(!(i % j))
                        {
                                sum += j;
                        }
                }
                if(sum == i)
                {
                        printf("%d its factors are",i);
                        for(int k = 1; k < i; k++)
                        {
                                if(i % k == 0)
                                        printf(" %d",k);
                        }
                        puts("");
                }
        }
        return 0;
}
