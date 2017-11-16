#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){
	char nombre [21];
	int testCases, badness, teams;
	scanf("%i", &testCases);
	for (int i = 0; i < testCases; ++i){
		scanf("%i",&teams);
		badness=0;
		int supPos[teams];
		for (int pos = 0; pos < teams; ++pos){
			scanf("%s%i", nombre, &supPos[pos]);
		}
		sort(supPos, supPos+teams);
		for (int pos = 1; pos <= teams; ++pos){
			if (pos<supPos[pos-1]){
				badness+=supPos[pos-1]-pos;
			}
			else{
				badness+=pos-supPos[pos-1];
			}
		}
		printf("%i\n", badness);
	}
	return 0;
}