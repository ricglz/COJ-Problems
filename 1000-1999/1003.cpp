#include <cstdio>

using namespace std;

int main(int argc, char const *argv[]){
	
	int tCases;
	scanf("%i", &tCases);
	for (int i = 0; i < tCases; ++i){
		int nCands, nRegions, pos=1, mostVoted;
		scanf("%i", &nCands);
		scanf("%i", &nRegions);
		int votes [nCands];
		for (int i = 0; i < nCands; ++i){
			votes[i]=0;
		}
		for (int i = 0; i < nRegions; ++i){
			for (int i2 = 0; i2 < nCands; ++i2){
				int temp;
				scanf("%i", &temp);
				votes[i2]+=temp;
			}
		}
		mostVoted=votes[pos-1];
		for (int i = 1; i < nCands; ++i){
			if(mostVoted<votes[i]){
				pos=i+1;
				mostVoted=votes[i];
			}
		}
		printf("%i\n", pos);
	}
	return 0;

}