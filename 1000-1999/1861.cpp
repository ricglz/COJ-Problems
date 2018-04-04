#include <vector>
#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int testCase;
	cin >> testCase;
	for (int t = 1; t <= testCase; ++t){
		int n;
		cin >> n;
		if(n==1){
			long long aux;
			cin >> aux;
			printf("Case %u: %llu\n", t, aux);
		}
		else{
			vector <vector <long long> > diamond;
			for (int i = 1; i <= n; ++i){
				vector <long long> aux(i);
				for (int j = 0; j < i; ++j){
					cin >> aux[j];
				}
				diamond.push_back(aux);
			}
			for (int i = n-1; i >0 ; --i){
				vector <long long> aux(i);
				for (int j = 0; j < i; ++j){
					cin >> aux[j];
				}
				diamond.push_back(aux);
			}
			for (int i = diamond.size()-2; i >= diamond.size()>>1; --i){
				for (int j = 0; j < diamond[i].size(); ++j){
					long data1=-1, data2=data1;
					if (j)
						data1=diamond[i+1][j-1];
					if(j<diamond[i].size()-1)
						data2=diamond[i+1][j];
					diamond[i][j]+=max(data1, data2);
				}
			}
			for (int i = (diamond.size()>>1)-1; i >= 0; --i){
				for (int j = 0; j < diamond[i].size(); ++j){
					diamond[i][j]+=max(diamond[i+1][j], diamond[i+1][j+1]);
				}
			}
			printf("Case %u: %llu\n", t, diamond[0][0]);
		}
	}
	return 0;
}