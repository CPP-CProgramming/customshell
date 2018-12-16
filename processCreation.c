#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#define MAXLINE 64

int main () {
	int pid;
	int child_pid;
	int status;
	
	pid = fork();
	switch (pid) {
		case -1:
			perror("Fork is failed\n");
			break;
		case 0:
			execl("/bin/ls", "ls", "-al", NULL);
			perror("execl is failed\n");
			break;
		default:
			child_pid = wait(&status);
			if(WIFEXITED(status)) {
				printf("Child process is normally terminated\n");
			}
			exit(0);
	}
}
