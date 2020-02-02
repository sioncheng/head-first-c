#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <pthread.h>

void* does_not(void *a) 
{
	for (int i = 0; i < 10; i++) {
		puts("does not");
		sleep(1);
	}

	return NULL;
}

void* does_too(void *a) 
{
	for (int i = 0; i < 10; i++) {
		puts("does too");
		sleep(1);
	}

	return NULL;
}

void error(char *msg) 
{
	fprintf(stderr, "%s %s\n", msg, strerror(errno));
	exit(1);
}

int main(int argc, char const *argv[])
{
	pthread_t t0;
	pthread_t t1;

	if (pthread_create(&t0, NULL, does_not, NULL) == -1) {
		error("can not create thread 0");
	}

	if (pthread_create(&t1, NULL, does_too, NULL) == -1) {
		error("can not create thread 1");
	}

	void *result;
	if (pthread_join(t0, &result) == -1) {
		error("can join thread 0");
	} 

	if (pthread_join(t1, &result) == -1) {
		error("can join thread 1");
	} 

	return 0;
}