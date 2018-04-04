#include <cstdio>

int main(int argc, char const *argv[]){
	int testCase;
	scanf("%u", &testCase);
	while(testCase--){
		int children;
		long candies=0;
		scanf("%u", &children);
		for (int i = 0; i < children; ++i){
			long temp;
			scanf("%lu", &temp);
			candies+=temp;
		}
		if (candies%children){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
	return 0;
}