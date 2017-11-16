#include <string>
#include <sstream>
#include <iostream>
#include <algorithm> 

using namespace std;

typedef long long int LL;

template <class T> string toStr(const T &x)
{ stringstream s; s << x; return s.str(); }

template <class T> LL toInt(const T &x)
{ stringstream s; s << x; LL r; s >> r; return r; }

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	LL resta=1; 
	LL cant=0;
	string number;
	cin >> number;
	while(resta){
		LL n = toInt(number);
		sort(number.begin(), number.end());
		LL m = toInt(number);
		resta = n - m;
		number = toStr(resta);
		cant++;
	}
	printf("%lli\n", cant);
	return 0;
}