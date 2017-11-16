#include <cstdio>
#include <cmath>
#define mod 1000000

long resultados[1000001];

void resolver(){
	resultados[0]=1;
	for (int i = 1; i <= 1000000; ++i){
		double d=i;
		resultados[i] = (resultados[(int)(d-sqrt(d))]%mod+resultados[(int)log(d)]%mod+
			resultados[(int)(d*sin(d)*sin(d))]%mod)%mod;

	}
}

int main(int argc, char const *argv[]){
	long i;
	scanf("%li", &i);
	resolver();
	while(i!=-1){
		printf("%li\n", resultados[i]);
		scanf("%li", &i);
	}
	return 0;
}