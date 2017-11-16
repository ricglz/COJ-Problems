#include <cstdio>
#include <cmath>

bool isPerfectSquare(long double n){
	long double a = floor(sqrt(n));
	return a*a==n;
}

int main(int argc, char const *argv[]){
	long double n;
	scanf("%LF", &n);
	while(n){
		if (isPerfectSquare(8*n+1)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		scanf("%LF", &n);
	}
	return 0;
}