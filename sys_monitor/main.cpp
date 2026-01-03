#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void handle_exit() {
    endwin();
}

int main() {
    initscr();
    cbreak();
    noecho();
    curs_set(0);
    nodelay(stdscr, TRUE);
    atexit(handle_exit);

    const int BAR_WIDTH = 40;

    while (1) {
        if (getch() == 'q') break;

        // --- REAL OS DATA COLLECTION ---
        double load_val;
        FILE *f = fopen("/proc/loadavg", "r");
        fscanf(f, "%lf", &load_val);
        fclose(f);

        // Convert load (e.g., 0.75) to percentage (75%)
        int load_pct = (int)(load_val * 100);
        
        // --- RENDERING ---
        erase();
        box(stdscr, 0, 0);
        mvprintw(1, 2, "REAL-TIME OS LOAD MONITOR");
        mvprintw(2, 2, "Reading from: /proc/loadavg");
        
        // Dynamic Label
        mvprintw(5, 2, "1-Min Avg: %.2f", load_val);
        
        // Progress Bar Calculation
        int display_pct = (load_pct > 100) ? 100 : load_pct; // Cap at 100 for the bar
        int filled = (display_pct * BAR_WIDTH) / 100;

        mvaddch(7, 2, '[');
        attron(A_REVERSE);
        for (int i = 0; i < filled; i++) mvaddch(7, 3 + i, ' ');
        attroff(A_REVERSE);
        for (int i = filled; i < BAR_WIDTH; i++) mvaddch(7, 3 + i, '.');
        mvaddch(7, 3 + BAR_WIDTH, ']');

        refresh();
        usleep(200000); // Update 5 times per second
    }

    return 0;
}