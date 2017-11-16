#include <cstdio>

int main(int argc, char const *argv[]){
	long double blocks;
	scanf("%LF", &blocks);
	long double total=1;
	long long int cant=1;
	while((total*2+cant*2-1)<blocks){
		total=2*(total+cant+1);
		cant++;
	}
	printf("%lli\n", cant);
	return 0;
}