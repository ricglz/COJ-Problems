#include <cstdio>

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%i", &testCases);
	for (int i = 0; i < testCases; ++i){
		int nStops;
		scanf("%i", &nStops);
		int answer = (1<<nStops)-1;
		printf("%i\n", answer);
	}
	return 0;
}