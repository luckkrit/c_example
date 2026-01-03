#include <ncurses.h>

int main() {
    initscr();              // START: "Turn on" the TUI mode
    
    // Equivalent to the whiptail msgbox
    mvprintw(5, 10, "OS Stats: CPU Load is 0.50");
    mvprintw(7, 10, "Press any key to exit...");
    
    refresh();              // PUSH: Show the changes to the user
    getch();                // WAIT: Stop and wait for a keypress
    
    endwin();               // END: "Turn off" the TUI mode
    return 0;
}