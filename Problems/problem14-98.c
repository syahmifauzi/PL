#include <stdio.h>

int main()
{
	int x, y, row, col;

	do {
		printf("Input row (1-12): ");
		scanf("%d", &row);
		if (row < 1 || row > 12)
			printf("Invalid!\n");
	} while (row < 1 || row > 12);

	do {
		printf("Input column (1-12): ");
		scanf("%d", &col);
		if (col < 1 || col > 12)
			printf("Invalid!\n");
	} while (col < 1 || col > 12);

	for (x = 1; x <= row; x++) {
		for (y = 1; y <= col; y++) {
			printf("%-5d", x * y);
		}
		printf("\n");
	}

	return 0;
}
