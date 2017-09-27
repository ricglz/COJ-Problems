#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]){
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i){
		int n;
		cin >> n;
		int lucky = pow(5,n);
		cout << lucky << endl;
	}
	return 0;
}