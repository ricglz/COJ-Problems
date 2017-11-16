#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%i", &testCases);
	while(testCases--){
		int amount;
		scanf("%i", &amount);
		int pos[amount];
		for (int i = 0; i < amount; ++i){
			scanf("%i", &pos[i]);
		}
		sort(pos, pos+amount);
		int answer = (pos[amount-1] - pos[0])*2;
		printf("%i\n", answer);
	}
	return 0;
}