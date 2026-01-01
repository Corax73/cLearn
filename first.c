#include <ncurses.h>

int main()
{
    int x = 0, y = 0, max_y = 0, max_x = 0;
    int ch;

    initscr();
    raw();
    keypad(stdscr, TRUE);
    noecho();
    curs_set(0);

    getmaxyx(stdscr, max_y, max_x);
    y = max_y / 2;
    x = max_x / 2;

    while ((ch = getch()) != 'q')
    {
        clear();

        switch (ch)
        {
        case KEY_UP:
            if (y > 0)
                y--;
            break;
        case KEY_DOWN:
            if (y < max_y - 1)
                y++;
            break;
        case KEY_LEFT:
            if (x > 0)
                x--;
            break;
        case KEY_RIGHT:
            if (x < max_x - 1)
                x++;
            break;
        }

        mvprintw(y, x, "@");

        refresh();
    }

    endwin();

    return 0;
}
