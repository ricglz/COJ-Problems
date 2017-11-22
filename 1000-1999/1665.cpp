#include <stdio.h>

int main(){
	char c, keyboard[48] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	int i;

	while( (c=getchar()) != EOF ){
		if( c != ' ' && c != '\n' ){
			for(i = 0; i < 48; i++){
				if(keyboard[i] == c){
					printf("%c", keyboard[i-1]);
					break;
				}
			}
		}else
			printf("%c", c);
	}
	return 0;
}