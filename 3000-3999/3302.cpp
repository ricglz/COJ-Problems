#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%i", &testCases);
	for (int i = 0; i < testCases; ++i){
		int l;
		scanf("%i", &l);
		double answer = 1.0;
		answer/=(l*l);
		printf("%.4lf\n", round(answer*10000) / 10000);
	}
	return 0;
}