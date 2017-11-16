#include <cstdio>

int main(int argc, char const *argv[]){
	long n, count=0;
	scanf("%li", &n);
	for (int a = 1; a <= 500; ++a){
		for (int b = 1; b <= a; ++b){
			if (a*a==b*b+n){
				count++;
				break;
			}
			else if(a*a<b*b+n){
				break;
			}
		}
	}
	printf("%li\n", count);
	return 0;
}