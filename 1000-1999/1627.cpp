#include <cstdio>

int main(int argc, char const *argv[]){
	long testCase;
	scanf("%li", &testCase);
	while(testCase--){
		long number, counter=0, mult5=5;
		scanf("%li", &number);
		while(mult5<=number){
			counter+=number/mult5;
			mult5*=5;
		}
		printf("%li\n", counter);
	}
	return 0;
}