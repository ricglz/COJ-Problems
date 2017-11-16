#include <cstdio>
#include <cstring>

int main(int argc, char const *argv[]){
	char word [21];
	scanf("%s", word);
	int longitud = strlen(word);
	int pos=0;
	bool hayI=false;
	while(!hayI && pos<longitud){
		if (word[pos]==105){
			hayI=true;
		}
		pos++;
	}
	if (hayI){
		printf("N\n");
	}
	else{
		printf("S\n");
	}
	return 0;
}