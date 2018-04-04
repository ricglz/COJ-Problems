#include <cstdio>

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%u", &testCases);
	while(testCases--){
		int size, sum=0;
		scanf("%u", &size);
		for (int i = 0; i < size; ++i){
			int temp;
			scanf("%u", &temp);
			sum+=temp;
		}
		sum-=(size-1);
		printf("%u\n", sum);
	}
	return 0;
}