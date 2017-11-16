#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string frase;
	cin >> frase;
	long long int sum=0;
	for (int i = 0; i < frase.length(); ++i){
		if(frase[i]!='a' && frase[i]!='e' && frase[i]!='i' && frase[i]!='o' && frase[i]!='u'){
			sum+=frase[i]-96;
		}
	}
	cout << sum << endl;
	return 0;
}