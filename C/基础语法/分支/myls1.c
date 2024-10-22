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
	if (argc < 2)
	{
		fprintf(stdout, "usage:%s filename\n", argv[0]);
		return -1;
	}

	if (lstat(argv[1], &buf) == -1)
fprintf(stdout, " %ld %d %d %ld", buf.st_nlink, buf.st_uid, buf.st_gid, 
			buf.st_size);

	t = localtime(&buf.st_mtime);
	fprintf(stdout, " %d-%d-%d %d:%d %s\n",t->tm_year+1900, t->tm_mon+1, 
		t->tm_mday,t->tm_hour, t->tm_min,argv[1]);

	return 0;
}
