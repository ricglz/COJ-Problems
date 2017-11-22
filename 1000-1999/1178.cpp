#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%i", &testCases);
	while(testCases--){
		long items, discount=0;
		scanf("%li", &items);
		long prices[items];
		for (int i = 0; i < items; ++i){
			scanf("%li", &prices[i]);
		}
		sort(prices, prices+items);
		reverse(prices, prices+items);
		for (int i = 2; i < items; i+=3){
			discount+=prices[i];
		}
		printf("%li\n", discount);
	}
	return 0;
}