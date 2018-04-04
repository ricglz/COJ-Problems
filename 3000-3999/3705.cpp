#include <cstdio>

int main(int argc, char const *argv[]){
	int vertex;
	scanf("%u", &vertex);
	long diagonals = vertex*(vertex-3)/2 + vertex;
	printf("%lu\n", diagonals);
	return 0;
}