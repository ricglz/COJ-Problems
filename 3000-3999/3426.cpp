#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

typedef long long int LL;

int main(int argc, char const *argv[]){
	LL a, b, min, max, sol, sol1;
	scanf("%lli%lli", &a, &b);
	if(a<b) swap(a, b);
	max=a+b-1;
	min=a-b;
	sol=(max*(max+1))/2;
	sol1=(min*(min+1))/2;
	sol-=sol1;
	printf("%lli\n", sol);
	return 0;
}

//(max-min+1)*(max+min)/2