#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argperdidos[]){
	int matches;
	long money;
	scanf("%i%li", &matches, &money);
	long goals = 0;
	vector<long> empates, perdidos;
	for (int i = 0; i < matches; ++i){
		long myTeam, otherTeam;
		scanf("%li%li", &myTeam, &otherTeam);
		if (myTeam>otherTeam){
			goals+=3;
		}
		else if(myTeam==otherTeam){
			if (money){
				goals+=3;
				money--;
			}
			else{
				empates.push_back(1);
			}
		}
		else{
			perdidos.push_back(otherTeam-myTeam+1);
		}
	}
	goals+=empates.size();
	int pos=0;
	sort(perdidos.begin(), perdidos.end());
	while(money && pos<perdidos.size()){
		if(money>=perdidos[pos]){
			goals+=3;
			money-=perdidos[pos];
		}
		else if(money>=perdidos[pos]-1){
			goals++;
			money-=(perdidos[pos]-1);
		}
		else{
			money=0;
		}
		pos++;
	}
	printf("%li\n", goals);
	return 0;
}