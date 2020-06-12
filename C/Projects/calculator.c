/*
 * TODO:
 * better buat flowchart dulu..
 * fix input other than int for select operation
 * devide (float)
 */
#include <stdio.h>


int main()
{
  int num1, num2, select, result;
  char opr, restart;
  float divide;
  char term;

  do {
    printf("--- SIMPLE CALCULATOR ---\n");
    printf("--------- MENU ----------\n");
    printf("1. Sum\n"
           "2. Different\n"
           "3. Product\n"
           "4. Quotient\n"
           "5. Quit Program\n");

    printf("Select operation (1-5): ");
    scanf("%d", &select);

    if (select > 0 && select < 5) {
      printf("Enter first number: ");
      if (scanf("%d%c", &num1, &term) != 2 || term != '\n') {
        printf("Invalid input\n");
        goto restart;
      }
      printf("Enter second number: ");
      scanf("%d", &num2);

      switch (select)
      {
        case 1: result = num1 + num2;
                opr = '+';
                break;
        case 2: result = num1 - num2;
                opr = '-';
                break;
        case 3: result = num1 * num2;
                opr = '*';
                break;
        case 4: if (num2 != 0) {
                  divide = num1 / (float)num2;
                  opr = '/';
                  printf("%d %c %d = %.2f\n", num1, opr, num2, divide);
                }
                else {
                  printf("Cannot devide by 0;\n");
                  goto end;
                }
      }
    }

    if (!(select > 0 && select < 6)) {
      printf("No such selection..\nTry again..\n");
      getchar();  /* to prevent infinite loop if user enter letter */
    }

    if (select > 0 && select < 4) {
      printf("%d %c %d = %d\n", num1, opr, num2, result);
    }

    restart:;
    if (select > 0 && select < 5) {
      do {
        printf("Do you want to restart? (y/n): ");
        scanf(" %c", &restart);
      } while (restart != 'y' && restart != 'Y' && restart != 'n' && restart != 'N');
    }

    if (select == 5 || restart == 'n' || restart == 'N')
      printf("Thanks for using this simple calculator..\n");

    end:;
  } while (select != 5 && restart != 'n' && restart != 'N');

  return 0;
}
