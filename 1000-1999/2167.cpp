#include <cstdio>

using namespace std;

void movePeople(int amount[]){
	amount[3]+=amount[1]/2;
	amount[1]%=2;
	while(amount[0] && amount[2]){
		amount[3]++;
		amount[0]--;
		amount[2]--;
	}
	while(amount[0]>=2 && amount[1]){
		amount[3]++;
		amount[0]-=2;
		amount[1]--;
	}
}

int amountOfPeople(int amount[]){
	int sum = 0;
	for (int i = 0; i < 4; ++i){
		sum+=amount[i];
	}
	return sum;
}

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%u", &testCases);
	while(testCases--){
		int amount[]={0,0,0,0};
		int groups;
		scanf("%u", &groups);
		for (int i = 0; i < groups; ++i){
			int pos;
			scanf("%u", &pos);
			amount[pos-1]++;
		}
		movePeople(amount);
		printf("%u\n", amountOfPeople(amount));
	}
	return 0;
}