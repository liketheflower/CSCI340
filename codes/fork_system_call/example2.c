//https://www.geeksforgeeks.org/fork-system-call/

#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 

	// make two process which run same 
	// program after this instruction 
	pid_t pid = fork(); 
        printf("pid is %d\n",pid);
	pid_t pid1 = fork(); 
        printf("pid1 is %d\n",pid1);
	printf("Hello world!\n"); 
	return 0; 
} 

