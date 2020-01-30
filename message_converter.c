#include <stdio.h>
#include <stdlib.h>
#include "to_upercase.h"

int main() {
	char msg[10];

	while(fgets(msg, 10, stdin)) {
		for (int i = 0; i < 10; i++) {
			char c = msg[i];
			if (c == '\0') {
				break;
			} else if (c == '\r' || c == '\n') {
				printf("%c", c);
			} else {
				printf("%c", uper_case(c));
			}
		}
	}

	return 0;
}