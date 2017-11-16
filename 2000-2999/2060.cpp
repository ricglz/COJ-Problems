#include <cstdio>

using namespace std;

int main(int argc, char const *argv[]){
	int n;
	int cost;
	scanf("%i", &n);
	while(n!=-1){
		int total=0, contador=0;
		for (int i = 0; i < n; ++i){
			scanf("%i", &cost);
			total+=cost;
			if (total%100==0){
				contador++;
			}
		}
		printf("%i\n", contador);
		scanf("%i", &n);
	}
	return 0;
}