#include <cstdio>

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%i", &testCases);
	int aux=testCases;
	double sum=0;
	while(testCases--){
		double h, d, c;
		scanf("%lf%lf", &h, &d);
		c = (h*h-d*d)/(2*h);
		sum+=c;
		printf("%.1lf\n", c);
	}
	printf("%.1lf\n", sum/aux);
	return 0;
}