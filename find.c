#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ADS_NUM = 7;
char *ADS[] = {
	"William: SBM GSOH likes sports, TV, dining",
	"Matt: SWM NS likes art, movies, theater",
	"Luis: SLM ND likes books, theater, art",
	"Mike: DWM DS likes trucks, sports and bieber",
	"Peter: SAM likes chess, working out and art",
	"Josh: SJM likes sports, movies and theater",
	"Jed: DBM likes theater, books and dining"
};


int find_sports(char *str) {
	return NULL != strstr(str, "sports");
}

int find_sports_no_bieber(char *str) {
	return find_sports(str) && NULL == strstr(str, "bieber");
}

void find(int (*fn)(char *)) {
	for (int i = 0 ; i < ADS_NUM; i++) {
		if (fn(ADS[i])) {
			printf("%s\n", ADS[i]);
		}
	}
}

int main(int argc, char const *argv[])
{

	find(find_sports_no_bieber);


	return 0;
}