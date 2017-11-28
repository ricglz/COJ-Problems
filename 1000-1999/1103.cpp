#include <cstdio>
#include <vector>

using namespace std;

vector <long long> combinations (7490, 1);

void createComb(long amount, int coins[]){
	for (long i = 1; i < 5; ++i){
		for (long pos = coins[i]; pos <= amount; ++pos){
			combinations[pos] += combinations[pos-coins[i]];
		}
	}
}

int main(int argc, char const *argv[]){
	int coins[] = {1,5,10,25,50};
	createComb(7490, coins);
	long amount;
	while(scanf("%li", &amount) != EOF){
		printf("%lli\n", combinations[amount]);
	}
	return 0;
}