/*
 * Problem 2 (Pg. 130)
 */
#include <stdio.h>

int Capture();
void Count(int, int);
void Display_Output(int, int);

int main()
{
	int no = 1, total_children, total_bags;
	
	do {
		printf("\nSchool #%d\n", no);
		printf("Enter number of children: ");
		total_children = Capture();
		printf("Enter number of candy bags: ");
		total_bags = Capture();
		Count(total_children, total_bags);
	
		printf("\n\nNext school number (-1 to stop): ");
		scanf("%d", &no);
	} while (no != -1);
	
//	printf("\n****End of main()****");
	
	return 0;
}


int Capture()
{
	int no;
	scanf("%d", &no);
	return no;
}


void Count(int total_children, int total_bags)
{
	int each_gets;
	each_gets = total_bags * 200 / total_children;
	Display_Output(total_children, each_gets);
//	printf("\n****End of Count()****");
}


void Display_Output(int total_children, int each_gets)
{
	printf("Total Children: %d\nEach gets: %d candies", total_children, each_gets);
//	printf("\n\n****End of Display_Output()****");
}
