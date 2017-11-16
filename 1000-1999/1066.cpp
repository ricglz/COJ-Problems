#include <cstdio>
#include <cmath>
#define PI 3.141592653589793

int main(int argc, char const *argv[]){
	long long int testCases;
	scanf("%lli", &testCases);
	for (long long int i = 0; i < testCases; ++i){
		int lados;
		double radio;
		scanf ("%lf%i", &radio, &lados);
		double pInscrito = 2*lados*radio*sin(PI/lados);
		double pSuscrito = 2*lados*radio*tan(PI/lados);
		printf("%.4lf %.4lf\n", round(pInscrito*10000)/10000, round(pSuscrito*10000)/10000);
	}
	return 0;
}