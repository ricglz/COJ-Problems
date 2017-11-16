#include <cstdio>

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%i", &testCases);
	for (int i = 0; i < testCases; ++i){
		int x1, y1, x2, y2;
		scanf("%i%i%i%i", &x1, &y1, &x2, &y2);
		int ans = x1>x2 ? x1-x2 + (y1>y2 ? y1-y2 : y2-y1) : x2-x1 + (y1>y2 ? y1-y2 : y2-y1);
		printf("%i\n", ans);
	}
	return 0;
}