#include <cstdio>
#include <cmath>

int main(int argc, char const *argv[]){
	long n;
	scanf("%li", &n);
	long cont = log(n)/log(2) + 1;
	printf("%li\n", cont);
	return 0;
}