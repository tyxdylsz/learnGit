#include <stdio.h>
//创建学生结构体，包括姓名，期末平均成绩，班级评议成绩，是否为班干部，是否为西部省份，论文篇数
typedef struct student
{
        char name[21];
        int avgScore;
        int classScore;
        char leader;
        char west;
        int articles;
        int scholarship;
}student;
int main(int argc, char * argv[])
{
        student stu[100];
        int N,Maxmoney = 0,m = 0;
        puts("请输入一共有多少个学生：");
        scanf("%d",&N);
        for(int i = 0; i < N; i++)
        {
                stu[i].scholarship = 0;
                scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].avgScore,&stu[i].classScore,
                                          &stu[i].leader,&stu[i].west,&stu[i].articles);
                
        }
        for(int i = 0; i < N; i++)
        {
                if(stu[i].avgScore > 80)
                {
                        if(stu[i].avgScore > 85) 
                        {
                                if(stu[i].classScore > 80)
                                        stu[i].scholarship += 4000;
                                if(stu[i].west == 'y')
                                        stu[i].scholarship += 1000;
                        }
                        if(stu[i].avgScore > 90)
                        {
                                stu[i].scholarship += 2000;
                        }
                        if(stu[i].articles >= 1)
                                stu[i].scholarship += 8000;
                }
                if(stu[i].classScore > 80 && stu[i].leader == 'y' )
                        stu[i].scholarship += 850;
                if(Maxmoney < stu[i].scholarship)
                {
                        m = i;
                        Maxmoney = stu[i].scholarship;
                }
        }
        printf("获得奖学金总数最高的学生是：%s,得到奖学金总数为%d\n",stu[m].name,Maxmoney);
         
        return 0;
}
