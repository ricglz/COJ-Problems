#include <iostream>
#include <string>
#include <sstream>

using namespace std;

template <class T> string toStr(const T &x)
{ stringstream s; s << x; return s.str(); }

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long number;
	cin >> number;
	while(number!=-1){
		string terniary="";
		while(number){
			terniary = toStr(number%3) + terniary;
			number/=3;
		}
		cout << terniary << endl;
		cin >> number;
	}
	return 0;
}