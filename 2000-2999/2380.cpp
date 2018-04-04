#include <cstdio>

int main(int argc, char const *argv[]){
	long numbers, sum = 0;
	scanf("%lu", &numbers);
	while(numbers--){
		long aux;
		scanf("%lu", &aux);
		while(aux){
			if (aux%2){
				sum++;
			}
			aux /=2;
		}
	}
	printf("%lu\n", sum);
	return 0;
}