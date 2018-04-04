#include <cstdio>
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCases;
	scanf("%u", &testCases);
	while(testCases--){
		set <string> network;
		int n;
		scanf("%u", &n);
		while(n--){
			string s1, s2;
			cin >> s1 >> s2;
			network.insert(s1);
			network.insert(s2);
			cout << network.size() << endl;
		}
	}
	return 0;
}