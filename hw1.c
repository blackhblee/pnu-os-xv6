// hw1: user program for testing getppid system call

#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
	int pid;

	printf(1, "sid: 201924552\n");
	printf(1, "name: Hyunbin Lee\n");
	printf(1, "current pid: %d\n", getpid());

	pid = fork();

	if (pid == 0) {
		printf(1, "child: pid = %d, ppid = %d\n", getpid(), getppid());
	}
	else {
		wait();
		printf(1, "parent: pid = %d, ppid = %d\n", getpid(), getppid());
	}

	exit();
}
