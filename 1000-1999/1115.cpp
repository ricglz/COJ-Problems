#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int testCases;
	cin >> testCases;
	for (int i = 0; i < testCases; ++i){
		long caso, number, contador=0;
		cin >> caso >> number;
		int limite=number/2;
		if (number%2==1){
			limite++;
		}
		for (; (0.5*limite)*(limite+1)>=number; limite--){
			int inferior=1;
			int suma=0;
			while(suma<=number && inferior<limite){
				suma = (0.5*(inferior+1))*(limite*2-inferior);
				if (suma==number){
					contador++;
				}
				inferior++;
			}
		}
		cout << caso << " " << contador << endl;
	}
	return 0;
}