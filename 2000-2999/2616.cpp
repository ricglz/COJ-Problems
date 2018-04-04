#include <iostream>
#include <cstdio>
#include <vector>
#include <climits>

using namespace std;

int changes [] = {1,3,5,6};
vector <long> ans(100001,LONG_MAX);

void fill(){
	ans[0]=0;
	ans[1]=1;
	ans[2]=2;
	for (int i = 1; i < 4; ++i){
		for (long j = changes[i]; j <= 100000; ++j){
			long aux = ans[j-changes[i]]+1;
			if (aux<ans[j]){
				ans[j]=aux;
			}
		}
	}
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	fill();
	int t,n;
	cin >> t;
	for (int i = 1; i <= t; ++i){
		cin >> n;
		printf("Case %u: %lu\n", i, ans[n]);
	}
	return 0;
}