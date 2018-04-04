#include <cstdio>

int main(int argc, char const *argv[]){
	int articles, impact;
	scanf("%u%u", &articles, &impact);
	long ans = articles*(impact-1)+1;
	printf("%lu\n", ans);
	return 0;
}