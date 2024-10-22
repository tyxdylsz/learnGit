#include <stdio.h>

typedef struct Date
{
        unsigned int month : 4;
        unsigned int day : 5;
        signed int year : 22;
        _Bool isDST : 1;
}Date;
int main(int argc, char * argv[])
{
        Date birthday = {12, 3 , 1980};    
        Date d;
        d.day = 19;
        d.month = 2;
        d.year = 2019;
        d.isDST = 0;

        printf("%02d-%02d-%04d\n",d.day,d.month,d.year);
        return 0;
}
