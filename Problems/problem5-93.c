#include <stdio.h>

int main()
{
	int num;
	char ans;
	
	
	do {
		printf("Input a number (1-4): ");
		scanf("%d", &num);
		
		while (num < 1 || num > 4) {
			printf("Out of range\n");
			printf("Input a number (1-4): ");
			scanf("%d", &num);
		}
		
		switch (num)
		{
			case 1: printf("Aqidah\n");break;
			case 2: printf("Fiqah\n");break;
			case 3: printf("Sirah\n");break;
			case 4: printf("Tajwid\n");
		}
		
		printf("Do you want to repeat? (y/n): ");
		scanf(" %c", &ans);
	} while (ans == 'Y' || ans == 'y');
	
	return 0;
}
