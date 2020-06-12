// g++ a.cpp -lncurses && ./a.out
#include <ncurses.h>

int main()
{
    // initializes the screen (constructor)
    // set up the memory and clear the screen
    initscr();

    // cbreak(); - allows ctrl+z (normally in development/test program)
    // raw(); - doesn't allows ctrl+z (normally in production)
    raw();

    // same as printf(), but print to a window
    printw("Hello World %d\n", 2);

    // refreshed the screen to match whats in memory
    refresh();

    printw("\n%d", getch());

    // like system pause
    getch();

    // free/deallocates memory and ends ncurses (destructor)
    endwin();

    return 0;
}