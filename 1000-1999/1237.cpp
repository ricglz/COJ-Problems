#include <cstdio>

int main(int argc, char const *argv[]){
	long a, b, c;
	scanf("%li%li", &a, &b);
	while(a && b){
		c = 2*a-b;
		printf("%li\n", c);
		scanf("%li%li", &a, &b);
	}
	return 0;
}