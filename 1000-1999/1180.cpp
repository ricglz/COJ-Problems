#include <cstdio>

int main(int argc, char const *argv[]){
	int tCases;
	scanf("%i", &tCases);
	while(tCases--){
		int pieces[6];
		for (int i = 0; i < 6; ++i){
			scanf("%i", &pieces[i]);
		}
		for (int i = 0; i < 2; ++i){
			printf("%i ", 1-pieces[i]);
		}
		for (int i = 2; i < 5; ++i){
			printf("%i ", 2-pieces[i]);
		}
		printf("%i\n", 8-pieces[5]);
	}
	return 0;
}