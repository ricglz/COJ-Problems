#include <string>
#include <iostream>

using namespace std;

string voltear(string media){
	string ans="";
	int length = media.length();
	for (int i = 0; i < length; ++i){
		ans+=media[length-i-1];
	}
	return ans;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string word, ans;
    cin >> word;
    int length = word.length();
    ans = voltear(word.substr(0,length/2));
    if (length%2){
        ans+=word[length/2];
    }
    ans += voltear(word.substr(length/2+length%2,length/2));
    cout << ans << endl;
	return 0;
}