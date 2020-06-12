// g++ a.cpp -lncurses && ./a.out
#include <ncurses.h>

int main()
{
    initscr();
    raw();

    int x, y;
    x = y = 10;
    // move(y, x) - moves the cursor to the specified location
    move(y, x);

    printw("Hello World %d", 2);
    refresh();
    

    int c = getch();
    // mvprintw(); - combination of move() and printw()
    mvprintw(0, 0, "\n%d", c);
    refresh();

    getch();

    // clears the screen
    clear();

    getch();
    endwin();

    return 0;
}

