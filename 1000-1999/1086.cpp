#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

long SieveOfEratosthenes(int n){
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n; p++){
        if (prime[p]){
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    long cont=-2;
    for (int i = 0; i < n; ++i){
    	if (prime[i]){
    		cont++;
    	}
    }
    return cont;
}
 
int main(){
	long number, cant;
	for (int times = 1; times <= 10; ++times){
		scanf("%li", &number);
		cant = SieveOfEratosthenes(number);
		printf("%li\n", cant);
	}
    return 0;
}