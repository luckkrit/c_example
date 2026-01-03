#include <ncurses.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    initscr();
    // box(stdscr, '*','*');
    // refresh();
    // getch();

    // addstr("Goodbye, curel c programming!");
    // refresh();

    // char text[] = "Greetings from Ncurses!";
    // char *t;
    // t = text;
    // while(*t){
    //     addch(*t);
    //     t++;
    //     refresh();
    //     napms(100);
    // }

    // char t1[] = "Shall I copmare thee";
    // char t2[] = " to a summer's day?";
    // addstr(t1);
    // addstr(t2);

    // move(2,0);
    // addstr("Though art move lovely...");
    // refresh();

    // int yoda = 874;
    // int ss = 65;
    // printw("Yoda is %d years old\n", yoda);
    // printw("He has collected %d years", yoda-ss);
    // printw(" of Social Security.");

    // addstr("Type a few lines of text\n");
    // addstr("Press ~ to quit\n");
    // refresh();
    // int ch;
    // while((ch=getch())!='~');

    // char first[24];
    // char last[32];
    // addstr("What is your first name? ");
    // refresh();
    // getnstr(first, 23);

    // addstr("What is your last name? ");
    // refresh();
    // getnstr(last,31);
    // printw("Pleased to meet you, %s %s!", first, last);
    // refresh();

    // srand(time(NULL));
    // while(true)
    // {
    //     int j = rand() % 80;
    //     int i = rand() % 20;
    //     int s = 1 + rand() % 100;
    //     char c = rand() % 100;
    //     move(i, j);
    //     addch(c);
    //     refresh();
    //     napms(s);
    // }

    int pieces;
    const float uni = 4.5;
    addstr("SHUSHI BAR");
    move(2,0);
    printw("We have Uni today for $%.2f.\n", uni);
    addstr("How many pieces would you like?");
    refresh();
    scanw("%d", &pieces);
    printw("You want %d pieces?\n",pieces);
    printw("That will be $%.2f!",uni*pieces);
    refresh();

    getch();
    endwin();
    return 0;
}