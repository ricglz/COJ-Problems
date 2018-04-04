#include <iostream>
#include <vector>

using namespace std;

vector <long> ans(45001,-1), weights(501);

long dp(int i,int h) {
    if (i < 0) return 0;
    if(weights[i] > h) return dp(i-1,h);
    if(ans[h] != -1) return ans[h];
    return ans[h] = max(dp(i-1,h),dp(i-1,h-weights[i]) + weights[i]);
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long h, n;
	cin >> h >> n;
	for (int i = 0; i < n; ++i){
		cin >> weights[i];
	}
	cout << dp(n-1, h) << endl;
	return 0;
}