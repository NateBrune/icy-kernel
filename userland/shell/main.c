#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include <unistd.h>
#include <os.h>

int main(int argc,char **argv){
	printf("                                            \n");
	printf("R U Ready\n");
	char buf[100];
	printf("Enter a string: ");
	gets(buf);
	printf("\n");
	printf("You entered: %s", buf);
	return 0;
}
