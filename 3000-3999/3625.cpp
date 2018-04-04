#include <cstdio>

int accumulated [13];

void solve(){
	long long mult=2;
	for (int i = 1; i < 13; ++i, mult*=2){
		accumulated[i]=mult-1;
	}
}

int main(int argc, char const *argv[]){
	solve();
	unsigned int testCases;
	scanf("%u", &testCases);
	while(testCases--){
		unsigned int stones;
		scanf("%u", &stones);
		for (int i = 0; i < 7; ++i)
		{
			/* code */
		}
	}
	return 0;
}