#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string number, copie, final="";
	cin >> number;
	copie=number;
	sort(copie.begin(), copie.end());
	int cont=0;
	do{
		cont++;
		if (copie.compare(number)>0){
			break;
		}
	} while (next_permutation(copie.begin(),copie.end()));
	if (copie[0]=='0'){
		cout << "0" << endl;
	}
	else{
		(cont>1) ? cout << copie : cout << 0;
		cout << endl;
	}
	return 0;
}