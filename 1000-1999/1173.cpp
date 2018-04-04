#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string text;
	while(getline(cin, text)){
		size_t pos = text.find("BUG");
		while(pos!=string::npos){
			text.erase(pos, 3);
			pos = text.find("BUG");
		}
		cout << text << "\n";
	}
	return 0;
}