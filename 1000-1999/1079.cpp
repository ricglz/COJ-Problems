#include <cstdio>
#include <vector>

using namespace std;

long max(long a, long b){
	if (a > b){
		return a;
	}
	return b;
}

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%u", &testCases);
	while(testCases--){
		int levels;
		scanf("%u", &levels);
		long triangle [levels] [levels];
		for (int i = 0; i < levels; ++i){
			for (int j = 0; j <= i; ++j){
				scanf("%lu", &triangle[i][j]);
			}
		}
		for (int i = levels-2; i >= 0 ; --i){
			for (int j = i; j >= 0; --j){
				triangle[i][j] += max(triangle[i+1][j], triangle[i+1][j+1]);
			}
		}
		printf("%lu\n", triangle[0][0]);
	}
	return 0;
}