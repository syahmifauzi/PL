#include <stdio.h>
#define ITEM 6

// Structure declaration must be above Function Prototype
struct snacks {
  char name;
  char symbol;
  float price;
  int qty;
};

void DisplaySnacks(struct snacks sn[]);
void Buyer(struct snacks sn[]);

int main()
{
  char role;
  struct snacks sn[ITEM] = {
    /* name, symbol, price, qty */
    {'X', '!', 1.25, 10},
    {'Y', '@', 2.20, 20},
    {'Z', '#', 3.90, 15},
    {'M', '$', 2.50, 0},
    {'N', '%', 2.00, 1},
    {'A', '*', 0.50, 0}
  };

  puts(
    "-----------------\n"
    "|  A  |  Buyer  |\n"
    "-----------------\n"
    "|  B  |  Owner  |\n"
    "-----------------\n"
  );

  do {
    printf("Buyer or Owner? (A/B): ");
    scanf(" %c", &role);
    if (role == 'A' || role == 'a')
      Buyer(sn);
    else if (role == 'B' || role == 'b')
      puts("Owner");
    else
      puts("Incorrect role");
  } while(1);

  return 0;
}


void Buyer(struct snacks sn[])
{
  int i, available, snack_idx;
  char snack, ans, receipt;
  float notes, amt_received, total_amt_received, balance;

  DisplaySnacks(sn);

  total_amt_received = 0;
  do {
    // Validation for selected snack
    available = 0;
    do {
      printf("Select your snack (");
      for (i = 0; i < ITEM; i++) {
        printf("%c", sn[i].name);
        if (i != ITEM - 1)
        printf("/");
      }
      printf("): ");
      scanf(" %c", &snack);
      for (i = 0; i < ITEM; i++) {
        if (snack == sn[i].name) {
          available = 1;
          snack_idx = i;
        }
      }
      if (available == 0)
        printf("No such snack! Please re-enter.\n");
    } while (available == 0);

    printf("\nSnack %c selected. Please pay RM %.2f\n\n", snack, sn[snack_idx].price);

    // Validation for notes
    amt_received = 0;
    do {
      printf("Insert notes (RM1, RM5 or RM10 only): ");
      scanf("%f", &notes);
      getchar();
      if (notes != 1 && notes != 5 && notes != 10)
        printf("Invalid Notes! Please re-enter.\n");
      else
        amt_received += notes;
    } while ((notes != 1 && notes != 5 && notes != 10) || (amt_received < sn[snack_idx].price));

    total_amt_received += amt_received;
    balance = amt_received - sn[snack_idx].price;
    printf("\nAmount received: RM %.2f\n", amt_received);
    printf("Balance: %.2f\n\n", balance);

    printf("More snack? (Y/N): ");
    scanf(" %c", &ans);
  } while (ans == 'Y' || ans == 'y');

  printf("Print receipt? (Y/N): ");
  scanf(" %c", &receipt);
  // if (receipt == 'Y' || receipt == 'y')
    // DisplayReceipt(snack_idx, total_amt_received)
    // snack_idx must be an array
    // total_amt_received must be an accumulator
    // TODO: decrease n update quantity
    // takleh guna structure.. huhu
}


void DisplaySnacks(struct snacks sn[])
{
  int i;

  puts("\n---------------------------------------------");
  puts("|       YUMMY SNACKS VENDING MACHINE        |");
  puts("---------------------------------------------");
  puts("|  SNACK  | SYMBOL |  PRICE (RM) | QUANTITY |");
  puts("---------------------------------------------");

  for (i = 0; i < ITEM; i++) { // 1 = 0
    printf("| %4c    ", sn[i].name);  // 10 spacing
    printf("| %4c   ", sn[i].symbol);
    printf("|     %.2f    ", sn[i].price);
    if (sn[i].qty == 0)
      printf("|   N/A    |\n");
    else if (sn[i].qty < 10)
      printf("|  %d left  |\n", sn[i].qty);
    else
      printf("| %d left  |\n", sn[i].qty);
    puts("---------------------------------------------");
  }
  printf("\n");
}
