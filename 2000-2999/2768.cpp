#include <cstdio>
#include <vector>
#include <cmath>

using namespace std;

vector<long double> values;
vector<long double> sum;

long double ep(long n){
	if (values.size()>=n+1){
		return values[n];
	}
	else{
		while(values.size()<n+1){
			values.push_back(fmod(values[values.size()-1]*2, 1000000007));
		}
		return values[n];
	}
}

long double solve(long n){
	if (sum.size()>=n+1){
		return sum[n];
	}
	while(sum.size()<n+1){
		sum.push_back(fmod(sum[sum.size()-1]+ep(sum.size()), 1000000007));
	}
	return sum[n];
}

int main(int argc, char const *argv[]){
	values.push_back(1);
	sum.push_back(1);
	long n;
	scanf("%lu", &n);
	while(n){
		printf("%.0Lf\n", fmod(solve(n), 1000000007));
		scanf("%lu", &n);
	}
	return 0;
}