#include<stdio.h>
#include <string.h>
int main()
{
    char* a;
    scanf("%s", a);
    int l = strlen(a);
    for (int i = 0; i < l; i++)
    {
        a[i] += 4;
    }
    puts(a);
    return 0;
}
