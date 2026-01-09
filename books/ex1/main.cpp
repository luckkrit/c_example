#include <ncurses.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

// #define COUNT 5

#define PINK 1

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

    // int pieces;
    // const float uni = 4.5;
    // addstr("SHUSHI BAR");
    // move(2,0);
    // printw("We have Uni today for $%.2f.\n", uni);
    // addstr("How many pieces would you like?");
    // refresh();
    // scanw("%d", &pieces);
    // printw("You want %d pieces?\n",pieces);
    // printw("That will be $%.2f!",uni*pieces);
    // refresh();

    // attron(A_BOLD);
    // addstr("Twinkle, twinkle little star\n");
    // attron(A_BLINK);
    // addstr("How I wonder what you are.\n");
    // attroff(A_BOLD);
    // addstr("Up above the world so high, \n");
    // addstr("Like a diamond in the sky.\n");
    // attrset(A_NORMAL);
    // addstr("Twinkle, twinkle little star\n");
    // addstr("How I wonder what you are.\n");
    // refresh();

    // char text[COUNT][10] = {
    //     "Do", "you", "find", "this", "silly?"
    // };
    // int a,b;
    // for(a=0;a<COUNT;a++){
    //     for(b=0;b<COUNT;b++){
    //         if(b==a) attrset(A_BOLD|A_UNDERLINE);
    //         printw("%s",text[b]);
    //         if(b==a) attroff(A_BOLD|A_UNDERLINE);
    //         addch(' ');
    //     }
    //     addstr("\b\n");
    // }
    // refresh();

    // if(!has_colors()){
    //     endwin();
    //     puts("Terminal cannot do colors");
    //     return(1);
    // }
    // if(start_color()!=OK){
    //     endwin();
    //     puts("Unable to start colors.");
    //     return(1);
    // }
    // printw("Colors initialized.\n");
    // printw("%d colors available.\n", COLORS);
    // printw("%d colors pairs.\n", COLOR_PAIRS);
    // refresh();

    // start_color();
    // init_pair(1,COLOR_YELLOW,COLOR_RED);
    // addstr("Normal text\n");
    // attrset(COLOR_PAIR(1));
    // addstr("Colored text. Wee!\n");
    // attrset(A_NORMAL);
    // addstr("Back to normal.");
    // refresh();

    // start_color();
    // init_pair(1, COLOR_BLACK, COLOR_RED);
    // init_pair(2, COLOR_YELLOW,COLOR_BLACK);
    // attrset(COLOR_PAIR(1));
    // addstr("I am Mr. Black!\n");
    // attrset(COLOR_PAIR(2));
    // addstr("I am Mr. Yellow!\n");
    // attrset(COLOR_PAIR(1) | A_BOLD);
    // addstr("I'm feeling bold!\n");
    // attrset(COLOR_PAIR(2) | A_BOLD);
    // addstr("Me too!");
    // refresh();

    // start_color();
    // if(!can_change_color()){
    //     addstr("This probably won't work...\n");
    // }

    // init_color(PINK, 1000,750,750);
    // init_pair(1,PINK,COLOR_BLACK);
    // attrset(COLOR_PAIR(1));
    // printw("This is the new color%d.\n", PINK);
    // refresh();

    // start_color();
    // init_pair(1, COLOR_WHITE,COLOR_BLUE);
    // addstr("This is some text");
    // // bkgd(COLOR_PAIR(1));
    // // bkgd('.');
    // // bkgd(COLOR_PAIR(1)|'.');
    // refresh();

    // start_color();
    // init_pair(1, COLOR_WHITE,COLOR_BLUE);
    // init_pair(2, COLOR_GREEN,COLOR_WHITE);
    // init_pair(3, COLOR_RED,COLOR_GREEN);
    // bkgd(COLOR_PAIR(1));
    // addstr("I think that I shall never see\n");
    // addstr("a color screen as pretty as thee.\n");
    // addstr("For seasons may change\n");
    // addstr("and storms may thunder;\n");
    // addstr("But color text shall always wonder.");
    // refresh();
    // getch();

    // bkgd(COLOR_PAIR(2));
    // refresh();
    // getch();

    // bkgd(COLOR_PAIR(3));
    // refresh();
    // getch();

    // addstr("Attention!\n");
    // beep();
    // refresh();

    // addstr("I said, ATTENTION!\n");
    // flash();
    // refresh();

    // addch('c');
    // addch(A_BOLD | 'a');
    // addch(A_REVERSE | 't');
    // refresh();

    // addch('c');
    // addch(A_BOLD | 'a');
    // addch(A_REVERSE | 't');
    // refresh();

    // move(0,2);
    // // addch('r');
    // addch('r' | A_REVERSE);
    // refresh();

    // addch(A_ALTCHARSET | ACS_PI);
    // addstr(" = 3.14159");
    // refresh();

    // for(int a=0;a<127;a++){
    //     printw("\t%2X:", a);
    //     addch(A_ALTCHARSET | a);
    // }
    // refresh();

    // // attrset(A_ALTCHARSET);
    // // addstr("Hello there!");
    // refresh();

    // addch(ACS_ULCORNER);
    // addch(ACS_HLINE);
    // addch(ACS_URCORNER);
    // addch('\n');

    // addch(ACS_VLINE);
    // addch(' ');
    // addch(ACS_VLINE);
    // addch('\n');

    // addch(ACS_LLCORNER);
    // addch(ACS_HLINE);
    // addch(ACS_LRCORNER);
    // addch('\n');
    // refresh();

    // chtype string[] = {
    //     'H' | A_BOLD, '0', '1' | A_REVERSE,
    //     'l' | A_REVERSE, 'o', '!' | A_UNDERLINE
    // };
    // int x = 0;
    // while(string[x]){
    //     addch(string[x]);
    //     x++;
    // }
    // refresh();

    // chtype string[] = {
    //     'H' | A_BOLD, 'e', 'l' | A_REVERSE,
    //     'l' | A_REVERSE, 'o', '!' | A_UNDERLINE, 0};
    
    // addchstr(string);
    // refresh();

    // char box[] = "lqk\nx x\nmqj\n";
    // attrset(A_ALTCHARSET);
    // addstr(box);
    // refresh();

    getch();
    endwin();
    return 0;
}
