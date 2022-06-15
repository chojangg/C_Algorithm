#include <stdio.h>

int main(void) {
	char* str[5] = { "mirim","computer","science","memory","girls" };
	int i, j;
	char* key;
	
	for (i = 1; i < sizeof(str) / sizeof(char*); i++) {
		key = str[i];
		for (j = i - 1; j >= 0; j--) {
			if (strcmp(key, str[j]) >= 0) break;
			else (str[j+1] = str[j]);
		}
		str[j + 1] = key;
	}
	for (i = 0; i < sizeof(str) / sizeof(char*); i++)
		printf("%s\n", str[i]);

	return 0;

}