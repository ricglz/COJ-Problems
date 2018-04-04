#include <cstdio>

int main(int argc, char const *argv[]){
	int quantity, pos=1; 
	double m;
	scanf("%u%lf", &quantity, &m);
	for (int i = 2; i <= quantity; ++i){
		double temp;
		scanf("%lf", &temp);
		if (temp>=m){
			pos = i;
			m = temp;
		}
	}
	printf("%u\n", pos);
	return 0;
}