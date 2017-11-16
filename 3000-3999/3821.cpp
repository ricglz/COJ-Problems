#include <cstdio>
#include <algorithm>

using namespace std;

typedef long long int LL;

void fastscan(LL &number){
	bool negative = false;
    register LL c;number = 0;
    c = getchar();
    if (c=='-'){
        negative = true;
        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}

int main(int argc, char const *argv[]){
	LL athletes;
	fastscan(athletes);
	LL scores[athletes];
	for (LL i = 0; i < athletes; ++i){
		LL score[10];
		for (LL i2 = 0; i2 < 10; ++i2){
			fastscan(score[i2]);
		}
		sort(score, score+10);
		scores[i]=0;
		for (LL i2 = 1; i2 < 9; ++i2){
			scores[i]+=score[i2];
		}
	}
	for (LL i = 0; i < athletes; ++i){
		printf("%lli %lli\n", i+1, scores[i]);
	}
	sort(scores, scores+athletes);
	printf("%lli\n", scores[athletes-1]);
	return 0;
}