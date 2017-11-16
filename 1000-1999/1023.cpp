#include <cstdio>
#include <cmath>

int main(int argc, char const *argv[]){
	long double money, sum=0.0;
	for (int i = 0; i < 12; ++i){
		scanf("%Lf", &money);
		sum+=money;
	}
	printf("$%.2Lf\n", sum/12);
	return 0;
}