#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include <unistd.h>
#include <os.h>
//#include <boot.h>
//#include <runtime/buffer.h>

int main(int argc,char **argv){
//	io.clear();
	printf("Hi Nate! \n");
	sleep(10000);
	int* vidptr;
	vidptr = (void *)0x83fc22;
        //* (long *) 0xE0000000 = 10;
	int i = 0;
	for(;i<5;i++){
		printf("Direct MEM[%d] = %d \n", i, vidptr);
		vidptr+=1;	
	}
	return 0;
}
