#include <stdio.h>
#include <string.h>

int main() 
{
	char s0[] = "there is a lot of fun in c programming";
	char s1[] = "fun";
	char s2[] = "lot";

	if (strstr(s0, s1))
		puts("found fun");

	return 0;
}