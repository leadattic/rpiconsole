#include <ncurses.h>
#include <string.h>
#include <stdio.h>

void init(){
    	initscr();
    	raw();
    	noecho();
    	keypad(stdscr, TRUE);

}
void cleanup() {
	endwin();
}
char get_key_down(){
	char ch = getch();
	return ch;
}

void render(char to_render[]){
	mvprintw(0, 0, to_render);
	refresh();
}


