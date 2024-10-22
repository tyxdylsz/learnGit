#include<stdio.h>
int main()
{
    char a;
    int i = 0, character = 0, n = 0, space = 0, o= 0;
    while((a = getchar()) != '\n')
    {
        if(a == ' ')
        {
            space++;
        }
        else if((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
        {
            character++;
        }
        else if(a >= '0' && a <= '9')
        {
            n++;
        }
        else
            o++;
    }
    printf("%d %d %d %d\n",character,n,space,o);
    return 0;
}
