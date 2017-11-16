#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){
	int groups;
	scanf("%i", &groups);
	int voters[groups];
	for (int i = 0; i < groups; ++i){
		scanf("%i", &voters[i]);
	}
	sort(voters, voters+groups);
	int tVotes=0;
	for (int i = 0; i < groups/2+1; ++i){
		tVotes+=voters[i]/2+1;
	}
	printf("%i\n", tVotes);
	return 0;
}