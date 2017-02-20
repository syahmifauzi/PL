#include <stdio.h>

int main()
{
  FILE *fptr;
  char first_name[10], last_name[10], course[20];
  int matric_no;

  // add student record in file
  fptr = fopen("student_record.txt", "a+");

  printf("Enter first name: ");
  scanf("%s", first_name);
  printf("Enter last name: ");
  scanf("%s", last_name);
  fprintf(fptr, "\nName: %s %s\n", first_name, last_name);

  printf("Enter matric number: ");
  scanf("%d", &matric_no);
  fprintf(fptr, "Matric Number: %d\n", matric_no);

  printf("Enter course: ");
  scanf("%s", course);
  fprintf(fptr, "Course: %s\n", course);

  fclose(fptr);

  return 0;
}
