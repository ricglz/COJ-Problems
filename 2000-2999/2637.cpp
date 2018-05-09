#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

#define LL long long

LL numbers[100000];
LL st [1048580];

void construct(LL node, LL left, LL right){
	if (left==right){
		st[node] = numbers[left];
		return;
	}
	int m = (left+right)/2;
	LL leftSon = node<<1, rightSon = leftSon+1;
	construct(leftSon, left, m);
	construct(rightSon, m+1, right);
	st[node] = st[leftSon] + st[rightSon];
}

LL sum(LL node, LL left, LL right, LL start, LL end){
	if(end < left || start > right)
		return 0;
	if(start <= left && right <= end)
		return st[node];
	LL m = (left+right)>>1;
	LL leftSon = node << 1;
	return sum(leftSon, left, m, start, end) + sum(leftSon+1, m+1, right, start, end);
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
		construct(1, 0, amount-1);
		while(sums--){
			LL start, end;
			cin >> start >> end;
			cout << sum(1, 0, amount-1, start, end) << "\n";
		}
		if(testCases) cout << "\n";
	}
	return 0;
}