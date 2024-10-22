#include<stdio.h>
void select_sort(int s[])
{
    for (int i = 0; i < 9; i++)
    {
        int tmp = s[i + 1];
        int b = i + 1;
        for (int j = i + 1; j < 10; j++)
        {

            if (tmp > s[j])
            {
                tmp = s[j];
                b = j;
            }
        }
        if (s[i] > tmp)
        {
            s[b] = s[i];
            s[i] = tmp;
        }
    }
}
int main()
{
    int s[10];
    int i = 0;
    while (i < 10)
    {
        scanf("%d", &s[i]);
        i++;
    }
    select_sort(s);
    i = 0;
    while (i < 10)
    {
        printf("%d\n", s[i]);
        i++;
    }
    return 0;
}

