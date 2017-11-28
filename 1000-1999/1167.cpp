#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <iterator>

using namespace std;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase, words;
    cin >> testCase;
    while(testCase--){
    	cin >> words;
    	vector <string> difWords;
    	for (int i = 0; i < words; ++i){
    		string temp;
    		cin >> temp;
    		difWords.push_back(temp);
    	}
    	sort(difWords.begin(), difWords.end());
    }
	return 0;
}