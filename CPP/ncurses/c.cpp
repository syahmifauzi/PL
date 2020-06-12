// g++ a.cpp -lncurses && ./a.out
#include <ncurses.h>

int main()
{
    initscr();

    int height, width, start_y, start_x;
    height = 10;
    width = 20;
    start_y = start_x = 5;

    // create a pointer to a window (nullptr)
    WINDOW *win = newwin(height, width, start_y, start_x);
    // refresh the entire screen
    refresh();

    // box() - put border around window
    box(win, 0, 0);
    mvwprintw(win, 1, 1, "This is my box");
    // refresh the specific window
    wrefresh(win);

    int c = getch();
    endwin();

    return 0;
}