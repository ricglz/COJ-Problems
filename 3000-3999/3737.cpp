#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]){
	long long sum = 0, n, m;
	scanf("%llu%llu", &n, &m);
	long long A[n], B[m];
	for (int i = 0; i < n; ++i){
	 	scanf("%llu", &A[i]);
	}
	for (int i = 0; i < m; ++i){
	 	scanf("%llu", &B[i]);
	}
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			sum += fabs(A[i]-B[j]);
		}
	}
	printf("%llu\n", sum);
	return 0;
}