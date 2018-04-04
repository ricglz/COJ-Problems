#include <cstdio>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]){
	long donationsQ, queriesQ;
	scanf("%lu", &donationsQ);
	int donations [donationsQ];
	for (int i = 0; i < donationsQ; ++i){
		scanf("%u", &donations[i]);
	}
	scanf("%lu", &queriesQ);
	long queries[queriesQ], bigger=0;
	for (int i = 0; i < queriesQ; ++i){
		scanf("%lu", &queries[i]);
		if (queries[i]>bigger){
			bigger=queries[i];
		}
	}
	vector <long> answer(bigger+1, 0);
	for (int i = 0, pos=1; i < donationsQ; ++i){
		while(donations[i]>0){
			answer[pos] = i+1;
			pos++;
			donations[i]--;
		}
	}
	for (int i = 0; i < queriesQ; ++i){
		if (answer[queries[i]]){
			printf("%lu\n", answer[queries[i]]);
		}
		else{
			printf("none\n");
		}
	}
	return 0;
}