#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){
	int girls;
	scanf("%i",&girls);
	for (int i = 0; i < girls; ++i){
		int votes [10],suma=0;
		for (int i2 = 0; i2 < 10; ++i2){
			scanf("%i",&votes[i2]);
		}
		sort(votes, votes+10);
		for (int i2 = 1; i2 < 9; ++i2){
			suma+=votes[i2];
		}
		printf("%i%s%i\n", i+1, " ", suma);
	}
	return 0;
}