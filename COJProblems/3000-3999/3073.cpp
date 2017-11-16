#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int testCases;
	string palabra;
	cin >> testCases;
	for (int i = 0; i < testCases; ++i){
		cin >> palabra;
		int longitud = palabra.length();
		if (longitud>10){
			int dif = longitud-2;
			cout << palabra[0] << dif << palabra[longitud-1] << endl;
		}
		else{
			cout << palabra << endl;
		}
	}
	return 0;
}