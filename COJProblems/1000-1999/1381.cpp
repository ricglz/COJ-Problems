#include <cstdio>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%i",&testCases);
	for (int i = 0; i < testCases; ++i){
		double d, v1, v2, m;
		scanf("%lf%lf%lf%lf", &d, &v1, &v2, &m);
		double t = d/(v1+v2);
		double answer = m * t;
		printf("%.2lf\n", round(answer*100) / 100);
	}
	return 0;
}