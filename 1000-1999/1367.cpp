#include <cstdio>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%u", &testCases);
	while(testCases--){
		int nodesQ, sum=0;
		scanf("%u", &nodesQ);
		char nodes[nodesQ][nodesQ];
		for (int i = 0; i < nodesQ; ++i){
			scanf("%s", nodes[i]);
			for (int j = 0; j < strlen(nodes[i]); ++j){
				if (nodes[i][j]=='1'){
					sum++;
				}
			}
		}
		if (sum%2){
			printf("Odd\n");
		}
		else{
			printf("Even\n");
		}
	}
	return 0;
}