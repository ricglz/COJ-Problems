#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int testCases;
	cin >> testCases;
	for (int i = 0; i < testCases; ++i){
		int r, c, lines;
		cin >> r >> c;
		lines = c*(2*r-1)-r;
		if (lines%2){
			cout << "First" << endl;
		}
		else{
			cout << "Second" << endl;
		}
	}
	return 0;
}