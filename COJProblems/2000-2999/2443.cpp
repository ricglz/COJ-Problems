#include <cstdio>
#include <algorithm>

using namespace std;

typedef long long int LL;

int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

bool isPrime(LL n){
	for (int i = 0; i < 25; ++i){
		if (n==primes[i]){
			return true;
		}
	}
	return false;
}

int main(int argc, char const *argv[]){
	LL n, k;
	scanf("%lli%lli", &n, &k);
	LL max=-1, pos=-1;
	bool repeated;
	for (LL i = 1; i <= n; ++i){
		LL cantPrimes=0;
		for (LL object = 0; object < k; ++object){
			LL value;
			scanf("%lli", &value);
			if (isPrime(value)){
				cantPrimes++;
			}
		}
		if (cantPrimes>max){
			max=cantPrimes;
			pos=i;
			repeated=false;
		}
		else if(cantPrimes==max){
			repeated=true;
		}
	}
	if (repeated){
		printf("No winner\n");
	}
	else{
		printf("Object %lli wins with %lli rare characteristics\n", pos, max);
	}
	return 0;
}