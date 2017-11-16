#include <cstdio>

using namespace std;

int main(int argc, char const *argv[]){
	int number;
	scanf("%i", &number);
	switch(number){
		case 1: case 2: case 6: case 10:
			printf("3\n");
			break;
		case 0: case 4: case 5: case 9:
			printf("4\n");
			break;
		case 3: case 7: case 8:
			printf("5\n");
			break;
		case 11: case 12:
			printf("6\n");
			break;
	}
	return 0;
}