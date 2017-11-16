#include <cstdio>

using namespace std;

int main(int argc, char const *argv[]){
	
	int tCases;
	scanf("%i", &tCases);
	for (int i = 0; i < tCases; ++i){
		int col, row;
		scanf("%i", &row);
		scanf("%i", &col);
		if (row==col){
			if (row%2==0){
				printf("%s\n", "L");
			}
			else{
				printf("%s\n", "R");
			}
		}
		else{
			if(row>col){
				if (col%2==0){
					printf("%s\n", "U");
				}
				else{
					printf("%s\n", "D");
				}
			}
			else{
				if (row%2==0){
					printf("%s\n", "L");
				}
				else{
					printf("%s\n", "R");
				}
			}
		}
	}
	return 0;

}