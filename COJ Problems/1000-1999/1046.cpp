#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int testCases;
	cin >> testCases;
	for (int i = 0; i < testCases; ++i){
		long suma=0;
		int a, b;
		cin >> a >> b;
		for (; a <= b; ++a){
			suma+=a*(a+1)*(a+2);
		}
		cout << suma%100 << endl;
	}
	return 0;
}