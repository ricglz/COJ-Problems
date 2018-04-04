#include <cstdio>

long n;

long times(long x){
	long cont = 1, sum = 0;
	while(x<=n){
		sum+=cont*(n-x+1);
		x*=2;
		cont++;
	}
	return sum;
}

long solve(){
	long sum=times(2);
	for (int i = 3; i <= n; i+=2){
		sum += times(i*2);
	}
	return sum;
}

int main(int argc, char const *argv[]){
	scanf("%lu", &n);
	printf("%lu\n", solve());
	return 0;
}