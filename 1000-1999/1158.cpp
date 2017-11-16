#include <cstdio>
#include <cmath>

int main(int argc, char const *argv[]){
	long testCases;
	scanf("%li", &testCases);
	while(testCases--){
		long long int number;
		scanf("%lli", &number);
		long long int answer, multiplicative;
		if (number%2){
			answer=1;
		}
		else{
			while(number){
				int power = log(number)/log(2);
				multiplicative = pow(2, power);
				number-=multiplicative;
			}
			answer=multiplicative;
		}
		printf("%lli\n", answer);
	}
	return 0;
}