#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int testCases;
	cin >> testCases;
	for (int i = 0; i < testCases; ++i){
		int n, p, resultado=0;
		string s;
		cin >> n >> s >> p;
		if(s=="odd"){
			resultado = 2 + 2*(p-1);
		}
		else{
			resultado = 1 + 2*(p-1);
		}
		cout << resultado << endl;
	}
	return 0;
}