#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long r, d;
	string s="";
	cin >> r;
	if(r>0){
		d = r*4;
		for (int i = 0; i < d; ++i){
			s+="a";
		}
		cout << "A" << s << "h\n";
	}
	return 0;
}