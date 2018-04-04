#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]){
	long long testCases;
	scanf("%llu", &testCases);
	for (long long i = 1; i <= testCases; ++i){
		double x, y, radius;
		scanf("%lf%lf", &x, &y);
		radius = sqrt(x*x + y*y);
		long long years = ceil(1.57*radius*radius/50);
		printf("Property %llu: This property will begin eroding in year %llu.\n", i, years);
	}
	printf("END OF OUTPUT.\n");
	return 0;
}