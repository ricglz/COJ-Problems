#include <cstdio>

int main(int argc, char const *argv[]){
	long testCase;
	scanf("%li", &testCase);
	for (long i = 0; i < testCase; ++i){
		long numeros[5];
		for (int pos = 0; pos < 5; ++pos){
			scanf("%li", &numeros[pos]);
		}
		bool secuencia=true;
		for (int pos = 1; pos < 5 && secuencia; ++pos){
			if (numeros[pos]!=numeros[pos-1]+1){
				secuencia=false;
			}
		}
		if (secuencia){
			printf("Y\n");
		}
		else{
			printf("N\n");
		}
	}
	return 0;
}