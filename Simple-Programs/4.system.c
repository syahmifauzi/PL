#include <stdio.h>

int main()
{
	printf("Assalamualaikum..\n");
	sleep(2);                                /* delay the output for 2000 miliseconds */
	system("title My Awsome Program!");      /* display "My Avesome Program!" at the name of the output window */
	printf("I am Syahmi Fauzi\n");
	sleep(2);
	system("cls");                           /* clear previous input on the screen */
	system("color F2");                      /* change text-color and bg-color of the output window */
	printf("I am learning C Program...\n");
	system("pause");                         /* display "Press any key to continue..." and waits for that */
	printf("Good Day!!\n");

	return 0;
}
/*
 * if you compile this file in a linux/unix machine,
 * it might not works with the system() function..
 * maybe you need some libraries..
 */
