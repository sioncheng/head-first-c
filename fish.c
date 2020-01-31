#include <stdio.h>

typedef struct preferences_struct {
	const char *food;
	float exercise_hourse;
} preferences;

typedef struct {
	const char *name;
	const char *species;
	int teeth;
	int age;
	preferences care;
} fish;


int main() 
{
	fish snappy = {"Spanny", "Piranha", 69, 4, {"Bugs", 7.9}};

	//snappy.name = "new";

	printf("%s\n", snappy.name);

	printf("%s\n", snappy.care.food);

	return 0;
}