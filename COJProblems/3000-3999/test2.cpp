#include <cstdio>

int main(int argc, char const *argv[]){
	int a, b, c;
	scanf("%i", &a);
	//while(a){
		for (int i = 1; i <= 10; ++i){
			printf("%i %i\n", i, i>>a);
		}
		scanf("%i", &a);
	//}
	return 0;
}