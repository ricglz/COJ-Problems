#include <cstdio>
#include <cstring>

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%i", &testCases);
	for (int i = 1; i <= testCases; ++i){
		char word[1000000], sub[1000000];
		scanf("%s%s", word, sub);
		long long sizeW = strlen(word), sizeS = strlen(sub), changes=0;
		for (long long posW = 0; posW < sizeW-sizeS+1; ++posW){
			if (word[posW]==sub[0]){
				long long posSub=1;
				bool equals=true;
				while(posSub<sizeS && equals){
					if (sub[posSub]!=word[posW+posSub]){
						equals=false;
					}
					else{
						posSub++;
					}
				}
				if (equals){
					changes++;
				}
			}
		}
		printf("Case %i: %lli\n", i, changes);
	}
	return 0;
}