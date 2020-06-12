/*
 * Sorting using Buble Sort & searching using Sequential Search algorithm
 * Sort a list of numbers in an 1D array using this algorithm
 */
 #include <stdio.h>
 #define SIZE 11
 
 int main()
 {
 	int x[] = {90, 80, 20, 50, 40, 60, 70, 10, 30, 100};
 	int i, j, temp, key, match = -1;
 	
 	// print the unsorted array
	printf("Before Sort: ");
	for (i = 0; i < SIZE - 1; i++)
		printf("%d ", x[i]);
	printf("\n\n");
	
	// apply Sequential Search in the unsorted list
	printf("Enter number to search: ");
	scanf("%d", &key);
	for (i = 0; i < SIZE -1 && match == -1; i++) {
		if (key == x[i])
			match = i;
	}
	if (match != -1)
		printf("Number %d found at index %d\n\n", key, match);
	else
		printf("Number not found!\n\n");
	
	// sort the number in ascending order using Buble Sort
	for (i = 0; i < SIZE - 1; i++) {
		for (j = 1; j < SIZE; j++) {
			if (x[j] < x[j-1]) {
				temp = x[j-1];
				x[j-1] = x[j];
				x[j] = temp;
			}
		}
	}
	 
	// print the sorted array
	printf("After Sort: ");
	for (i = 0; i < SIZE - 1; i++)
		printf("%d ", x[i]);
	printf("\n");
	 	
 	return 0;
}
