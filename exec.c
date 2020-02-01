#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	/* code */
	for (int i = 0; i < 10; i++) {
		pid_t pid = fork();
		if (pid == -1) {
			fprintf(stderr, "Can't fork process: %s\n", strerror(errno));
			return 1;
		}

		if (pid == 0) {
			puts("exec ls -l .");
			execlp("ls", "-l", ".", NULL);
		}
	}
	return 0;
}