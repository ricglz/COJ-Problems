#include <cstdio>

int main(int argc, char const *argv[]){
	int left, right;
	scanf("%i%i", &left, &right);
	while(left || right){
		printf("%i\n", left+right);
		scanf("%i%i", &left, &right);
	}
	return 0;
}