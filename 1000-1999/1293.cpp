#include <cstdio>

int main(int argc, char const *argv[]){
	int n;
	scanf("%i", &n);
	long double ans = 1;
	while(n--){
		ans*=2;
	}
	printf("%.0Lf\n", ans);
	return 0;
}