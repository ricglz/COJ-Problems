#include <cstdio>

typedef long long int LL;

int main(int argc, char const *argv[]){
	LL number, ans;
	scanf("%lli", &number);
	ans = number/3*2 + (number%3==2 ? 1 : 0);
	printf("%lli\n", ans);
	return 0;
}