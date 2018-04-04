#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string bin, ans;
	cin >> bin;
	map <string, string> clave;
	clave ["000"] = clave ["0"] = "0";
	clave ["001"] = clave ["1"] = "1";
	clave["010"] = clave ["10"] = "2";
	clave["011"] = clave ["11"] = "3";
	clave ["100"] = "4";
	clave ["101"] = "5";
	clave ["110"] = "6";
	clave ["111"] = "7";
	for (int i = bin.length()-1; i >=2 ; i-=3){
		ans = clave[bin.substr(i-2, 3)] + ans;
	}
	if (bin.length()%3){
		ans = clave[bin.substr(0, bin.length()%3)] + ans;
	}
	cout << ans << endl;
	return 0;
}