#include <cstdio>

int main(int argc, char const *argv[]){
	int t, a, b;
	scanf("%u", &t);
	while(t--){
		scanf("%i%i", &a, &b);
		long long sum = 0;
		while(a<=b){
			sum += __builtin_popcount(a++);
		}
		printf("%lli\n", sum);
	}
	return 0;
}