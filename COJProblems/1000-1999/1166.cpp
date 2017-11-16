#include <cstdio>

typedef long long int LL;

int main(int argc, char const *argv[]){
	LL testCases, cant, num, odd, even;
	scanf("%lli", &testCases);
	for (int i = 0; i < testCases; ++i){
		odd=even=0;
		scanf("%lli", &cant);
		for (int i2 = 0; i2 < cant; ++i2){
			scanf("%lli", &num);
			if (num%2){
				odd++;
			}
			else{
				even++;
			}
		}
		printf("%lli even and %lli odd.\n", even, odd);
	}
	return 0;
}