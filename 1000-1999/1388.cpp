#include <cstdio>

typedef long long int LL;

using namespace std;

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%i",&testCases);
	for (int i = 0; i < testCases; ++i){
		int a;
		LL b;
		scanf("%i%lli", &a, &b);
		a%=10;
		if (b!=0){
			switch(a){
			case 0:
				printf("%i\n", 0);
				break;
			case 1:
				printf("%i\n", 1);
				break;
			case 2:
				switch(b%4){
					case 0:
						printf("%i\n", 6);
						break;
					case 1:
						printf("%i\n", 2);
						break;
					case 2:
						printf("%i\n", 4);
						break;
					case 3:
						printf("%i\n", 8);
						break;
				}
				break;
			case 3:
				switch(b%4){
					case 0:
						printf("%i\n", 1);
						break;
					case 1:
						printf("%i\n", 3);
						break;
					case 2:
						printf("%i\n", 9);
						break;
					case 3:
						printf("%i\n", 7);
						break;
				}
				break;
			case 4:
				printf("%i\n", b%2==1 ? 4 : 6);
				break;
			case 5:
				printf("%i\n", 5);
				break;
			case 6:
				printf("%i\n", 6);
				break;
			case 7:
				switch(b%4){
					case 0:
						printf("%i\n", 1);
						break;
					case 1:
						printf("%i\n", 7);
						break;
					case 2:
						printf("%i\n", 9);
						break;
					case 3:
						printf("%i\n", 3);
						break;
				}
				break;
			case 8:
				switch(b%4){
					case 0:
						printf("%i\n", 6);
						break;
					case 1:
						printf("%i\n", 8);
						break;
					case 2:
						printf("%i\n", 4);
						break;
					case 3:
						printf("%i\n", 2);
						break;
				}
				break;
			case 9:
				printf("%i\n", b%2==1 ? 9 : 1);
				break;
		}
		}
		else{
			printf("%i\n", 1);
		}
	}
	return 0;
}