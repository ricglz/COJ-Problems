#include <cstdio>
#include <vector>
#include <cmath>

using namespace std;

long long closeTriangle(long long n){
	int m=int(0.5*(sqrt(1+8*n)-1));
    long long tan0=(m*m+m)/2;
    long long tan1=((m+3)*m)/2+1;     
    if (tan0<tan1){
    	return tan0;
    }
    return tan1;
}

long long solve(long long n){
	long answer = 0;
	while(n>0){
		long long substractor = closeTriangle(n);
		n-=substractor;
		answer++;
	}
	return answer;
}

int main(int argc, char const *argv[]){
	long long n;
	while(scanf("%llu", &n) != EOF){
		printf("%llu\n", solve(n));
	}
	return 0;
}