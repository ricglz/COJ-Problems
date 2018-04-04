#include <cstdio>

int main(int argc, char const *argv[]){
	int floors;
	while(scanf("%u", &floors), floors){
		double balls = floors*(floors+1)*(2*floors+1)/6;
		printf("%.0lf\n", balls);
	}
	return 0;
}