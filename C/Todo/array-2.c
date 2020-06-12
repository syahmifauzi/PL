#include <stdio.h>
#define ROW 4
#define COL 3

int main()
{
	int x[ROW][COL];	// declaration of a 2D array
	int i, j;
	
	// get input from user
	for (i = 0; i < ROW; i++) {
		printf("Row #%d\n", i+1);
		for (j = 0; j < COL; j++) {
			printf("\tNumber #%d: ", j+1);
			scanf("%d", &x[i][j]);
		}
	}
	
	// print the array in a table form
	printf("\nYour Table\n");
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++)
			printf("%3d ", x[i][j]);
		printf("\n");	// print new line at the end of each row
	}
	
	return 0;
}
