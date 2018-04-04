#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string sum;
	cin >> sum;
	sort(sum.begin(), sum.end());
	sum.erase(0, sum.length()/2);
	cout << sum[0];
	for (int i = 1; i < sum.length(); ++i){
		cout << "+" << sum[i];
	}
	cout << "\n";
	return 0;
}