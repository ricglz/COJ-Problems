#include <cstdio>
#include <cstring>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[]){
	int t;
	scanf("%i", &t);
	for (int i = 0; i < t; ++i){
		char n [1000];
		long k, r;
		scanf("%s", n);
		scanf("%li", &k);
		scanf("%li", &r);
		char temp [1000];
		strcpy(temp, n);
		for (int cont = 1; cont < k; ++cont){
			strcat(n,temp);
		}
		printf("%s\n", n);
		long numerof = atol(n);
		printf("%li\n", numerof%r);
	}
	return 0;
}