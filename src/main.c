#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "engine/engine.h"
#define FALSE 0
#define TRUE 1


int main(){
	init();
	char num = 0;
	while(TRUE){
		char key = get_key_down();
                if(key == 'q'){
                        cleanup();
                        exit(0);
                } else {
                        char to_render[3] = {(char)num + '0', key, '\0'}; // Create a character array with the character returned by get_key_down
                        render(to_render); // Pass the character array to render
                        
                	num++;
			sleep(0.1);
		}
	}
}
