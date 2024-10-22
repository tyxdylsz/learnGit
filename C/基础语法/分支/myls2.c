#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char *argv[])
{
	struct stat buf;
	struct tm *t;
	int i = 8;
	if (argc < 2)
	{
		fprintf(stdout, "usage:%s filename\n", argv[0]);
		return -1;
	}

	if (lstat(argv[1], &buf) == -1)
	{
		perror("stat");
		return -1;
	}

	switch (buf.st_mode & S_IFMT)
	{
		case S_IFBLK:	printf("b");	break;
		case S_IFCHR:	printf("c");	break;
		case S_IFDIR:	printf("d");	break;
		case S_IFREG:	printf("-");	break;
		case S_IFLNK:	printf("l");	break;
		case S_IFSOCK:	printf("s");	break;
		case S_IFIFO:	printf("p");	break;
		default:		printf("?");
	}

	while (i >= 0)
	{
		if (buf.st_mode & 1 << i)
		{
			switch (i % 3)
			{
				case 2:	printf("r");	break;				
				case 1:	printf("w");	break;
				case 0:	printf("x");	break;
			}
		
		}
		else
			printf("-");
		i--;
	}
	
	fprintf(stdout, " %ld %d %d %ld", buf.st_nlink, buf.st_uid, buf.st_gid, 
			buf.st_size);

	t = localtime(&buf.st_mtime);
	fprintf(stdout, " %d-%d-%d %d:%d %s\n",t->tm_year+1900, t->tm_mon+1, 
		t->tm_mday,t->tm_hour, t->tm_min,argv[1]);

	return 0;
}
