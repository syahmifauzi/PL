#include <stdio.h>
#define ROW 4
#define COL 3

int main()
{
	int x[][COL] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110}; // or
	//	int x[][COL] = {{10, 20, 30}, {40, 50}, 60, 70, 80, 90, 100, 110};
	int i, j;
	
	// print the array in a table form
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++)
			printf("%3d ", x[i][j]);
		printf("\n");	// print new line at the end of each row
	}
	
	return 0;
}
