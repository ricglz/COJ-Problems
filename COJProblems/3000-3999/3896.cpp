#include <cstdio>

int main(int argc, char const *argv[]){
	long wide, height, ax, ay, by, bx;
	scanf("%li%li", &wide, &height);
	scanf("%li%li", &ax, &ay);
	scanf("%li%li", &bx, &by);
	printf("%li 0 %li %li\n", ax, bx, height);
	return 0;
}