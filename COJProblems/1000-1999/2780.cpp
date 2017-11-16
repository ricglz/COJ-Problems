#include <cstdio>

int main(int argc, char const *argv[]){
	long long n, count=0;
	scanf("%lli", &n);
	for (int a = 1; a <= 500; ++a){
		for (int b = a; b <= 500; ++b){
			if (a*a+15==b*b){
				count++;
				break;
			}
			else if(a*a+15>b*b){
				break;
			}
		}
	}
	printf("%lli\n", count);
	return 0;
}