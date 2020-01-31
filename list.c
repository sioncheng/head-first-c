#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person
{
	const char *name;
	struct person *next;
};

struct person * create(char name[]) {
	struct person *p = (struct person *) malloc(sizeof(struct person));
	p->name = strdup(name);
	p->next = NULL;
	return p;
}

int main() {

	char name[20];

	struct person *person_list = NULL;
	struct person *t = NULL;

	while(fgets(name, 20, stdin)) {
		if (name[0] == 'q' && (name[1] == '\0') {
			break;
		}

		int n = strlen(name);
		if (name[n-1] == '\n') {
			name[n-1] = '\0';
		}

		if (NULL == person_list) {
			person_list = create(name);
			t = person_list;
		} else {
			t->next = create(name);
			t = t->next;
		}
	}

	puts(" \n\n ====== \n\n");

	while (person_list != NULL) {
		printf("%s\t", person_list->name);
		t = person_list;
		person_list = person_list->next;
		free(t);
	}
	printf("%s\n", "");

	return 0;
}