#include <cstdio>
#include <map>

using namespace std;

int factoriales[11];

long double factorial(int n){
	if (n<=1){
		return 1;
	}
	else if(factoriales[n]==0){
		return n * factorial(n-1);
	}
	return factoriales[n];
}

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%u", &testCases);
	for (int i = 1; i <= testCases; ++i){
		int num;
		scanf("%u", &num);
		printf("Case #%u: %.0Lf\n", i, factorial(num));
	}
	return 0;
}