#include <cstdio>
#include <cmath>

//#define cot 2.414213562373095048801688724209698078569671875376948073176

int main(int argc, char const *argv[]){
	int testCase;
	scanf("%i", &testCase);
	for (int i = 0; i < testCase; ++i){
		long x;
		scanf("%li", &x);
		printf("%li\n", 3*x*x+2);
	}
	return 0;
}