#include <cstdio>

using namespace std;

int main(int argc, char const *argv[]){
	int t;
	scanf("%i", &t);
	for (int i = 0; i < t; ++i){
		long b, promedio, a;
		int x;
		scanf("%li", &b);
		scanf("%i", &x);
		if((x+b)%2==0){
			promedio=b-1;
		}
		else{
			promedio=b+1;
		}
		a=promedio;
		while(x>0){
			promedio=a;
			a=2*promedio-b;
			x--;
		}
		printf("%li\n", a);
	}
	return 0;
}