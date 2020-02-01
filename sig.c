#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void die(int sig) {
	puts("Goodbye...\n");
	exit(1);
}

int catch_signal(int sig, void (*handler) (int)) {
	struct sigaction action;
	action.sa_handler = handler;
	sigemptyset(&action.sa_mask);
	action.sa_flags = 0;
	return sigaction(sig, &action, NULL);
}

int main(int argc, char const *argv[])
{
	if (catch_signal(SIGINT, die) == -1) {
		fprintf(stderr, "%s\n", "Can't map the handler");
		exit(2);
	}

	char msg[30];
	printf("enter your message: ");
	fgets(msg, 30, stdin);
	printf("you typed %s\n", msg);

	return 0;
}