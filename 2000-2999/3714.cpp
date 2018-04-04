#include <cstdio>
#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

bool pos(vector <char> arr, char x){
	for (int i = 0; i < arr.size(); ++i){
		if (arr[i]==x){
			return true;
		}
	}
	return false;
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string word;
	while(cin >> word){
		string ans;
		map<char, int> values;
		vector <char> letres;
		for (int i = 0; i < word.length(); ++i){
			bool exists = pos(letres, word[i]);
			if(!exists){
				letres.push_back(word[i]);
				values[word[i]] = letres.size();
			}
			ans += to_string(values[word[i]]);
		}
		for (int i = 0; i < ans.size(); ++i){
			if (ans[i]=='2'){
				ans[i]='5';
			}else if (ans[i]=='5'){
				ans[i]='2';
			}else if (ans[i]=='6'){
				ans[i]='9';
			}else if (ans[i]=='9'){
				ans[i]='6';
			}
		}
		cout << ans << endl;
	}
	return 0;
}