#include <cstdio>

#define LL long double

LL factorial(LL num){
	LL ans=1;
	while(num>1){
		ans*=num--;
	}
	return ans;
}

LL combinations(LL n, LL k){
	LL ans = factorial(n)/(factorial(k)*factorial(n-k));
	return ans;
}

int main(int argc, char const *argv[]){
	int testCase;
	scanf("%i", &testCase);
	while(testCase--){
		int k;
		scanf("%i", &k);
		k--;
		LL num[5], sum = 0;
		for (int i = 0; i < 5; ++i){
			scanf("%LF", &num[i]);
		}
		for (int i = 0; i < 5; ++i){
			printf("%.0LF %i\n", num[i]+k, k);
			sum+=combinations(num[i]+k, k);
		}
		printf("%.0LF\n", sum);
	}
	return 0;
}