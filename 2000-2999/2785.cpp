#include <cstdio>

int main(int argc, char const *argv[]){
	int n;
	double sum=0.0;
	scanf("%i", &n);
	for (int i = 0; i < n; ++i){
		double sc;
		scanf("%lf", &sc);
		sum+=sc;
	}
	printf("%.2lf\n", sum/n);
	return 0;
}