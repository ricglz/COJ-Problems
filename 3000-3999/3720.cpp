#include <cstdio>
#include <map>

using namespace std;

map<int, long double> factoriales;

long double factorial(int n){
	if (n<=1){
		return 1;
	}
	else if(factoriales[n]==0){
		return n * factorial(n-1);
	}
	return factoriales[n];
}

long double countTrees(int numKeys) {
	return (factorial(2*numKeys)/(factorial(numKeys+1)*factorial(numKeys)));
}

int main(int argc, char const *argv[]){
	int num;
	scanf("%u", &num);
	while(num){
		printf("%.0Lf\n", countTrees(num));
		scanf("%u", &num);
	}
	return 0;
}