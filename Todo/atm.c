#include <stdio.h>


int main()
{
  int pin, select;
  float withdraw, bank_in;

  printf("Enter PIN number: ");
  scanf("%d", &pin);

  printf("MENU\n"
         "1. Withdraw money\n"
         "2. Bank in\n"
         "3. Exit\n");
  printf("Select option (1-3): ");
  scanf("%d", &select);

  switch (select) {
    case 1: printf("Enter money to withdraw: ");
            scanf("%f", &withdraw);
            printf("You just withdraw RM%.2f\n", withdraw);
            break;
    case 2: printf("Enter money to bank in: ");
            scanf("%f", &bank_in);
            printf("You just withdraw RM%.2f\n", bank_in);
            break;
    case 3: printf("Thanks for using this ATM machine\n");
            break;
    default: printf("Wrong selection\n");
  }

  return 0;
}
