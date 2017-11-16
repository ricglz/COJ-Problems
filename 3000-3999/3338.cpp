#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]){
	
	int testCases;
	cin >> testCases;
	for (int i = 0; i < testCases; ++i){
		char mensaje[251], clave[27];
		cin.ignore();
		cin.getline(mensaje, 251);
		cin >> clave;
		for (int pos = 0; pos < strlen(mensaje); ++pos){
			if (pos==0){
				cout << i+1 << " ";
			}
			if (mensaje[pos]!=' '){
				int pos2 = mensaje[pos]-65;
				cout << clave[pos2];
			}
			else{
				cout << mensaje[pos];
			}
		}
		cout << endl;
	}
	return 0;
}