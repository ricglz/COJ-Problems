#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[])
{
	string bin;
	cin >> bin;
	string oct;
	int tam=0;
	int suma=0;
	for (int i = bin.length()-1; i >= 0; --i) {
		if (bin[i]=='1') {
			switch(tam){
				case 0:
					suma=1;
					break;
				case 1:
					suma+=2;
					break;
				case 2:
					suma+=4;
					break;
			}
		}
		if (tam==2) {
			oct = static_cast<ostringstream*>( &(ostringstream() << suma) )->str() + oct;
			tam=0;
			suma=0;
		}
		else{
			tam++;
		}
	}
	if (tam!=0){
		oct = static_cast<ostringstream*>( &(ostringstream() << suma) )->str() + oct;
	}
	cout << oct << endl;
	return 0;
}