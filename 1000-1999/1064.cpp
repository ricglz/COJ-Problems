#include <cstdio>

int main(int argc, char const *argv[]){
	int h1, h2, m1, m2;
	while(scanf("%u%u%u%u", &h1, &m1, &h2, &m2)){
		if (!h1 && !h2 && !m1 && !m2) break;
		int hours = 60*(h2-h1) + m2 - m1;
		if (hours<0){
			hours += 1440;
		}
		printf("%i\n", hours);
	}
	return 0;
}