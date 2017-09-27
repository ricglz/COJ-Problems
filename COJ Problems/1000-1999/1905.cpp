#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int tCases;
	cin >> tCases;
	for (int i = 0; i < tCases; ++i){
		string num="", nombreC;
		cin >> num;
		getline(cin, nombreC);
		cout << num.substr(0,2);
		string temp;
		for (int i = nombreC.length(); i >= 0; --i)
		{
			if (nombreC[i]!=' '){
				temp=nombreC[i] + temp;
			}
			else if(nombreC[i]==' ' && i!=0){
				temp+='*';
				cout<<temp;
				temp="";
			}
		}
		cout << temp << num.substr(2,2) << endl;
	}
	return 0;
}