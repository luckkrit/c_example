#include <ncurses.h>
using namespace std;

int main(int argc, char ** argv) {
    
    // initialize the screen
    // sets up memory and clears the screen
    initscr();

    int height, width, start_x, start_y;
    height = 10;
    width = 20;
    start_y = start_x = 10;

    WINDOW * win = newwin(height, width, start_y, start_x);
    // refresh screen after create window
    refresh();
    // create box on window
    box(win, 0, 0);
    // print string on window at (1,1)
    mvwprintw(win,1,1, "this is my box");
    
    // refresh specific window
    wrefresh(win);


    
    // whats for user input, returns int value of that key
    int c = getch();
    
    // deallocates memory and ends ncurses
    endwin();
    return 0;
}