#include <cstdio>

int main(int argc, char const *argv[]){
	int n, m, j;
	scanf("%u%u%u", &n, &m, &j);
	int apples[j];
	int answer = 0, begin=1, end = m;
	for (int i = 0; i < j; ++i){
		scanf("%u", &apples[i]);
		if (apples[i]>end){
			answer += apples[i]-end;
			begin += apples[i]-end;
			end = apples[i];
		}
		else if (apples[i]<begin){
			answer += begin-apples[i];
			end -= begin-apples[i];
			begin = apples[i];
		}
	}
	printf("%u\n", answer);
	return 0;
}