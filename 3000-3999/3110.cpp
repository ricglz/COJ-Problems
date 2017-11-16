#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long n;
	scanf("%li", &n);
	string res="";
	for (int i = 0; i < 2*n/3; ++i){
		res+='7';
	}
	switch(n%3){
		case 1:
		res = "3" + res;
		break;
		case 2:
		res = "1" + res;
		break;
	}
	cout << res << endl;
	return 0;
}