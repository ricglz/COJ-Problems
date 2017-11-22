#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string first, second, ans="";
    cin >> first >> second;
    for (int i = 0; i < first.length(); ++i){
    	int pos = second.find(first[i]);
    	if (pos!=-1){
    		ans+=first[i];
    		first.erase(i, 1);
    		second.erase(pos, 1);
    		i--;
    	}
    }
    cout << "First:" << first << endl;
    cout << "Second:" << second << endl;
    cout << "First&Second:" << ans << endl;
	return 0;
}