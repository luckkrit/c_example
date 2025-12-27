#include <ncurses.h>
using namespace std;

int main(int argc, char ** argv) {
    
    // initialize the screen
    // sets up memory and clears the screen
    initscr();

    // prints a string(const char *) to a window
    printw("Hello World!");

    // refreshes the screen to match whats in memory
    refresh();

    // whats for user input, returns int value of that key
    int c = getch();
    printw("%d",c);
    getch();

    // deallocates memory and ends ncurses
    endwin();
    return 0;
}