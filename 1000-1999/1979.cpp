#include <cstdio>

int main(int argc, char const *argv[]){
	int d, h, m;
	scanf("%i%i%i", &d, &h, &m);
	long ans = 60*(24*d+h)+m-16511;
	if (ans<0){
		printf("-1\n");
	}
	else{
		printf("%li\n", ans);
	}
	return 0;
}