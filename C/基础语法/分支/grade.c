#include <stdio.h>

int main(int argc, char * argv[])
{
        float score;
        puts("please a score:"); 
        scanf("%f",&score);
        if(score < 0 || score > 100)
        {
                puts("please input a valid number!");
        } 
        else{       
                int s = score / 10;
                switch s
                {
                        case 10:
                                printf("A-execellent\n");
                                break;
                        case 9:
                                printf("A-execellent\n");
                                break;
                        case 8:
                                printf("B-good\n");
                                break;
                        case 7:
                                printf("B-good\n");
                                break;
                        case 6:
                                printf("C-ok\n");
                                break;
                        default:
                                printf("D-not pass\n");
                                break;
                }
        }
        return 0;
}
