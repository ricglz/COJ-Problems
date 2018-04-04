#include <cstdio>

int main(int argc, char const *argv[]){
	bool exists[42] = {false};
	int count = 0, aux, modulus;
	for (int i = 0; i < 10; ++i){
		scanf("%u", &aux);
		modulus = aux%42;
		if(!exists[modulus]){
			exists[modulus]=true;
			count++;
		}
	}
	printf("%i\n", count);
	return 0;
}