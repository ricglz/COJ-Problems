#include <cstdio>

using namespace std;

int main(int argc, char const *argv[]){
	int a;
	scanf("%i", &a);
	long ans = a*(5+2*a);
	printf("%li\n", ans);
	return 0;
}