/*
 * Problem 4 (Pg. 132)
 */
#include <stdio.h>
#include <stdlib.h>
#define TICKET_PRICE 15.00
#define DISCOUNT_PRICE 0.05

void Capture(int);
float TicketPay(int);
float CalcDiscount(float);
float CalcNetPay(float, float);
void Display(int, float, float, float);

int main()
{
  int no_of_tickets;

  puts("~~Welcome To CFS Ticketing System~~");
  printf("Enter number of tickets: ");
  scanf("%d", &no_of_tickets);

  Capture(no_of_tickets);

  puts("\nEND OF PROGRAM");

  return 0;
}


void Capture(int no_of_tickets)
{
  float total_price, discount, net_pay;
  total_price = TicketPay(no_of_tickets);
  discount = CalcDiscount(total_price);
  net_pay = CalcNetPay(total_price, discount);
  Display(no_of_tickets, total_price, discount, net_pay);

  return;
}


float TicketPay(int no_of_tickets)
{
  float total_price;
  total_price = TICKET_PRICE * no_of_tickets;

  return total_price;
}


float CalcDiscount(float total_price)
{
  float discount;
  discount = DISCOUNT_PRICE * total_price;

  return discount;
}


float CalcNetPay(float total_price, float discount)
{
  float net_pay;
  net_pay = total_price - discount;

  return net_pay;
}


void Display(int no_of_tickets, float total_price, float discount, float net_pay)
{
  puts("\nPAYMENT INFORMATION");
  printf("Number of tickets: %d\n", no_of_tickets);
  printf("Total price: RM%.2f\n", total_price);
  printf("Discount: RM%.2f\n", discount);
  printf("Nett pay: RM%.2f\n", net_pay);

  return;
}
