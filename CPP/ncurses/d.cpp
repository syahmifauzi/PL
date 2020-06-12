// g++ a.cpp -lncurses && ./a.out
#include <ncurses.h>

int main()
{
    initscr();
    cbreak(); // allow ctrl+c
    // raw(); // takes all input as raw (so, cannot ctrl+c)
    noecho(); // user input doesn't show up on screen

    int height, width, start_y, start_x;
    height = 10;
    width = 20;
    start_y = start_x = 5;

    WINDOW *win = newwin(height, width, start_y, start_x);
    refresh();

    // box(win, LR, TB) - 0 default, try 103(g)
    char c = 'c';
    char plus = '+';
    // box(win, (int)c, 0); // or more specific
    int left, right, top, bottom, tlc, trc, blc, brc;
    left = right = 103;
    top = bottom = (int)c;
    tlc = trc = blc = brc = (int)plus;
    wborder(win, left, right, top, bottom, tlc, trc, blc, brc);
    mvwprintw(win, 1, 1, "This is my box");
    wrefresh(win);

    getch();
    getch();
    endwin();

    return 0;
}