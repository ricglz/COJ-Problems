#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long testCase;
	cin >> testCase;
	for (int i = 0; i < testCase; ++i){
		string cadena;
		int movement;
		cin >> cadena >> movement;
		int longitud = cadena.length();
		while(movement>=longitud){
			movement-=longitud;
		}
		if (movement){
			string temp = cadena.substr(longitud-movement, movement);
			cadena.erase(longitud-movement, movement);
			cadena.insert(0, temp);
		}
		cout << cadena << endl;
	}
	return 0;
}