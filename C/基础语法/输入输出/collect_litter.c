#include <stdio.h>

int main(int argc, char * argv[])
{
        //当int和char连续输入的时候，怎么吸收掉垃圾字符回车
        int a;
        char ch;
        puts("please input a number and a character:");
        //问题：
        /*
        scanf("%d",&a);
        scanf("%c",&ch);
        printf("%d-%c-%d\n",a,ch,ch);//输入5敲回车，结果为5-(这里隔一行)-10，
                                      //但是我们还没有输入想输入的字符
        printf("%d\n",'\n');//换行符的ASCII为10
        */
        //解决办法一：用getchar()吸收掉换行符
        /*
        scanf("%d",&a);
        getchar();
        scanf("%c",&ch);
        printf("%d-%c-%d\n",a,ch,ch);
        */
        //解决办法二：需要用抑制符*来吃掉换行符
        scanf("%d%*c",&a);
        scanf("%c",&ch);
        printf("%d-%c-%d\n",a,ch,ch);
        //解决办法三：输入的时候%d和%c之间输入一个空格
        scanf("%d",&a);
        scanf(" %c",&ch);
        printf("%d-%c-%d\n",a,ch,ch);
        //解决办四:如果只是想输入一个int和char，可以在scanf中连续输入
        /*
        scanf("%d%c",&a,&ch);
        printf("%d-%c-%d\n",a,ch,ch);
        */
         
        return 0;
}
