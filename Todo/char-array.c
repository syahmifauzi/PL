/*
 * 1D array of characters
 */
#include <stdio.h>
#define LENGTH 100

int main()
{
	char sentence[LENGTH];
	int i, z = 0, match[LENGTH] = {-1};
	char key;
	
	// to read a sentence
	puts("Enter a sentence:");
	gets(sentence);
	puts("The sentence entered is:");
	puts(sentence);
	// printf("%s\n", sentence);
	printf("The third letter in the sentence is %c\n", sentence[2]);

	// apply Sequential Search to locate a particular character
	printf("Enter a characted to search: ");
	// scanf(" %c", &key);
	key = getchar();
	for (i = 0; i < LENGTH; i++) {
		if (key == sentence[i]) {
			match[z] = i;
			z++;	
		}
	}
	if (match[0] == -1)
		puts("Character not found");
	else {
		printf("Character %c found at index: ", key);
		for (i = 0; i < z; i++)
			printf("%d ", match[i]);
	}
	
	return 0;
}
