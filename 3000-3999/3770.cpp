#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int s;
	cin >> s;
	char letras [s];
	for (int i = 0; i < s; ++i){
		cin >> letras[i];
		int pos=i;
		while(letras[pos]<letras[pos-1] && pos>0){
			char temp = letras[pos];
			letras [pos] = letras[pos-1];
			letras [pos-1] = temp;
			pos--;
		}
	}
	int medio = s/2;
	cout << letras[medio] << endl;
	return 0;
}