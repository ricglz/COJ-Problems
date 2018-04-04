#include <cstdio>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]){
	long n;
	scanf("%lu", &n);
	vector <vector <int> > dishes;
	for (int i = 0, branches=2; i < n; ++branches){
		vector <int> aux(branches,0);
		for (int j = 0; j < branches && i<n; ++j, i++){
			scanf("%u", &aux[j]);
		}
		dishes.push_back(aux);
	}
	for (int i = dishes.size()-2; i > 0; --i){
		for (int j = dishes[i].size()-1; j >= 0; j--){
			dishes[i][j] += (dishes[i+1][j] > dishes[i+1][j+1] ? dishes[i+1][j] : dishes[i+1][j+1]);
		}
	}
	printf("%u\n", (dishes[0][0] > dishes[0][1] ? dishes[0][0] : dishes[0][1]));
	return 0;
}