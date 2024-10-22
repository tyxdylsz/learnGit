#include <stdio.h>
#define Maxsize 6
int main(int argc, char * argv[])
{
        char s[Maxsize];
        char *a;
        //gets(s);
        a = fgets(s,Maxsize,stdin);
       for(int i = 0;i < Maxsize;i++)
       {
               printf("%c-%d\n",s[i],s[i]);
       }
        puts(s);
        puts(a);       
        return 0;
}
