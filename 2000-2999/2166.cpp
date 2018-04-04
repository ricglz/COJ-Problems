#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%u", &testCases);
	while(testCases--){
		int n, k, ans=0;
		scanf("%u%u", &n, &k);
		int participants[n];
		for (int i = 0; i < n; ++i){
			scanf("%u", &participants[i]);
		}
		while(participants[ans]>0 && participants[ans] >= participants[k-1]){
			ans++;
		}
		printf("%u\n", ans);
	}
	return 0;
}