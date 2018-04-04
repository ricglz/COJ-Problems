#include <cstdio>
#include <vector>

using namespace std;

void solve(long long p, long long q, vector <long long>& solution){
	if (p >0 && q>1 && p%q!=0){
		solution.push_back(p/q);
		long long q2 = p%q;
		solve(q, q2, solution);
	}
	else if (p%q==0){
		solution.push_back(p/q-1);
		solution.push_back(1);
	}
	else{
		solution.push_back(p-1);
		solution.push_back(1);
	}
}

int main(int argc, char const *argv[]){
	long long p, q;
	scanf("%llu%llu", &p, &q);
	while (p && q){
		vector <long long> solution;
		solve(p, q, solution);
		printf("%llu/%llu=[", p, q);
		for (int i = 0; i < solution.size(); ++i){
			if (i){
				printf(",");
			}
			printf("%llu", solution[i]);
		}
		printf("]\n");
		scanf("%llu%llu", &p, &q);
	}
	return 0;
}