#include <cstdio>

int factorial(int a){
	int total=1;
	while(a>1){
		total*=a;
		a--;
	}
	return total;
}

int main(int argc, char const *argv[]){
	printf("n e\n");
	printf("- -----------\n");
	long double total=2.5;
	printf("0 1\n");
	printf("1 2\n");
	printf("2 2.5\n");
	for (int i = 3; i <= 9; ++i){
		double sumar=1.0/factorial(i);
		total+=sumar;
		printf("%i %.9Lf\n", i, total);
	}
	return 0;
}