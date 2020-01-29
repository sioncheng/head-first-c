#include <stdio.h>


void inc(int* p) {
	*p = *p + 1;
}

int main() 
{
	int a = 1;
	inc(&a);
	printf("%i\n", a);

	char str[] = "hello";
	printf("%s'size is %lu\n", str, sizeof(str));
	printf("%c\n", *str);
	printf("%p\n", &str);
	printf("%p\n", str);
	printf("%lu\n", sizeof(&str));

	char *pstr = str;
	str[0] = 'H';
	printf("%s\n", str);
}
