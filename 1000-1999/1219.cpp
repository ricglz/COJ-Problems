#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){
	int testC;
	scanf("%i", &testC);
	while(testC--){
		long bullets, jobs, distance;
		scanf("%li%li", &bullets, &jobs);
		long money[jobs];
		for (int i = 0; i < jobs; ++i){
			scanf("%li%li", &money[i], &distance);
		}
		sort(money, money+jobs);
		long long max = 0;
		for (int i = 0; i < bullets; ++i){
			max += money[jobs-1-i];
		}
		printf("%lli\n", max);
	}
	return 0;
}