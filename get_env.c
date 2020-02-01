#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	printf("$PATH is %s\n", getenv("PATH"));
	return 0;
}