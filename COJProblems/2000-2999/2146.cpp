#include <cstdio>

int main(int argc, char const *argv[]){
	long long vertex, diagonals;
	scanf("%lli%lli", &diagonals, &vertex);
	if (vertex*(vertex-3)/2 == diagonals){
		printf("yes\n");
	}
	else{
		printf("no\n");
	}
	return 0;
}