/*
 * Void Function Without Parameter
 */
#include <stdio.h>
#include <stdlib.h>

void LetakGaris(void);  // Function Prototype

int main()
{
  LetakGaris();
  puts("My name is Syahmi Fauzi");
  LetakGaris();

  return 0;
}


void LetakGaris() // Function Definition
{
  puts("------------------------------");

  return; // means return nothing (x letak pun xpa)
}
