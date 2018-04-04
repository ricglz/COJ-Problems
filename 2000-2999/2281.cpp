#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

void solve(char original []){
	int size = strlen(original), raiz = sqrt(size);
	for (int i = raiz-1; i >= 0; --i){
		for (int j = i; j < size; j+=raiz){
			printf("%c", original[j]);
		}
	}
	printf("\n");
}

int main(int argc, char const *argv[]){
	int testCase;
	scanf("%i", &testCase);
	while(testCase--){
		char original[10000];
		scanf("%s", original);
		solve(original);
	}
	return 0;
}