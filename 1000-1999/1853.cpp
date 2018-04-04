#include <cstdio>
#include <vector>

using namespace std;

vector <long double> factoriales;
long double ans[10]={0};

long double factorial(long n){
	if (factoriales.size()>=n){
		return factoriales[n-1];
	}
	while(factoriales.size()!=n){
		factoriales.push_back(factoriales[factoriales.size()-1]*(factoriales.size()+1));
	}
	return factoriales[n-1];
}

long comb(long n, long r){
	long double arriba = factorial(n);
	long double b = factorial(r);
	long double c = factorial(n-r);
	long double abajo = b*c;
	return arriba/abajo;
}

void solve(){
	for (long i = 0; i < 10; ++i){
		long n = i+2;
		ans[i] = comb(n*n, 3);

	}
}

int main(int argc, char const *argv[]){
	factoriales.push_back(1);
	solve();
	long testCases;
	scanf("%lu", &testCases);
	ans[4]++;
	ans[8]++;
	while(testCases--){
		long n;
		scanf("%lu", &n);
		printf("%.0LF\n", ans[n-1]);
	}
	return 0;
}