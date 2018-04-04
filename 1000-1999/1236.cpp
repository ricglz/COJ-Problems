#include <cstdio>

void solution(int a, int sum1, int c, int sum2, int person){
	int amount=0;
	if(person%sum1 <= a && person%sum1 != 0) amount++;
	if(person%sum2 <= c && person%sum2 != 0) amount++;
	if (amount == 1){
		printf("one\n");
	}
	else if (amount == 2){
		printf("both\n");
	}
	else{
		printf("none\n");
	}
}

int main(int argc, char const *argv[]){
	int a, b, c, d, p, m, g, sum1, sum2;
	scanf("%i%i%i%i%i%i%i", &a, &b, &c, &d, &p, &m, &g);
	sum1 = a+b;
	sum2 = c+d;
	solution(a, sum1, c, sum2, p);
	solution(a, sum1, c, sum2, m);
	solution(a, sum1, c, sum2, g);
	return 0;
}