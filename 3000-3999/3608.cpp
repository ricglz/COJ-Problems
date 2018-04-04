#include <cstdio>

int main(int argc, char const *argv[]){
	long testCases, h, w;
	scanf("%lu", &testCases);
	while(testCases--){
		scanf("%lu %lu", &h, &w);
		if (h==w){
			printf("2\n");
		}
		else{
			printf("1\n");
		}
	}
	return 0;
}