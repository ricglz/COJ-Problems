#include <cstdio>
#include <vector>

using namespace std;

vector <int> badPrimes;

bool isDivisible(int n){
	for (int i = 0; i < badPrimes.size(); ++i){
		if (n%badPrimes[i]==0){
			return false;
		}
	}
	return true;
}

int main(int argc, char const *argv[]){
	int n, cont = 1;
	scanf("%u", &n);
	for (int i = 2; i < n; ++i){
		if (n%i==0){
			badPrimes.push_back(i);
		}
		else if (isDivisible(i)){
			cont++;
		}
	}
	printf("%u\n", cont);
	return 0;
}