#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "engine/engine.h"
#define FALSE 0
#define TRUE 1


int main(){
	init();
	char num = 0;
	set_key_down_timeout(1, stdscr);
	while(TRUE){
		char key = get_key_down();
		if(key == 'q'){
                        cleanup();
                        exit(0);
                } else {
			if(key != (char) -1){
                        	char to_render[4] = {(char)num + '0', '\n',  key, '\0'};
                        	render(to_render);
			}
			else{
				char to_render[3] = {(char)num+0,'\n','\0'};
				render(to_render);
			}
                	num++;
			
		}
	}
}
