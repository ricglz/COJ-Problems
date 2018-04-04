#include <cstdio>
#include <iostream>

using namespace std;

long long sequence[31]={0};

void fill(){
	long long a[31], b[31];
	a[1]=b[1]=1;
	sequence[0]=1;
	for (int i = 1; i <= 15; i++){
		sequence[i<<1] = a[i]+ 2*b[i];
		a[i+1]=a[i]+2*b[i];
		b[i+1]=a[i]+3*b[i];
	}
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	fill();
	int n;
	while(cin >> n, n!=-1){
		cout << sequence[n] << endl;
	}
	return 0;
}