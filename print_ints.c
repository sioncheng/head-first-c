#include <stdio.h>
#include <stdarg.h>

void print_ints(int args, ...) {
	va_list ints;
	va_start(ints, args);
	for (int i = 0 ; i < args; i++)
		printf("%i\n", va_arg(ints, int));
	va_end(ints);
}

int main(int argc, char const *argv[])
{
	print_ints(3, 1, 2, 3);
	return 0;
}