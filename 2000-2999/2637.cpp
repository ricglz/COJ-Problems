#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

#define LL long long

LL numbers[100000];
LL* st;

void construct(LL node, LL left, LL right){
	if (left==right){
		st[node] = numbers[left];
		return;
	}
	int m = (left+right)/2;
	construct(node<<1, left, m);
	construct((node<<1)+1, m+1, right);
	st[node] = st[node<<1] + st[(node<<1)+1];
}

void create(LL amount){
	LL x = (int) (ceil(log2(amount)));
	LL max_size = (2 << x)-1;
	st = (long long int *) malloc(sizeof(long long int)*max_size);
	construct(1, 0, amount-1);
}

LL sum(LL node, LL left, LL right, LL start, LL end){
	if(end < left || start > right)
		return 0;
	if(start <= left && right <= end)
		return st[node];
	LL m = (left+right)>>1;
	return sum(node<<1, left, m, start, end) + sum((node<<1)+1, m+1, right, start, end);
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int testCases;
	cin >> testCases;
	while(testCases--){
		LL amount, sums;
		cin >> amount >> sums;
		for (int i = 0; i < amount; ++i){
			cin >> numbers[i];
		}
		create(amount);
		while(sums--){
			LL start, end;
			cin >> start >> end;
			cout << sum(1, 0, amount-1, start, end) << "\n";
		}
		free(st);
		if(testCases) cout << "\n";
	}
	return 0;
}