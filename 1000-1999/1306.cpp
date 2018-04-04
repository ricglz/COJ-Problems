#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>

using namespace std;

int toInt(const string &x){ 
	stringstream s; 
	s << x; 
	int r; 
	s >> r; 
	return r; 
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCases;
    cin >> testCases;
    while(testCases--){
    	string num;
    	cin >> num;
    	int ans;
    	if (num.length()>2){
    		ans = toInt(num.substr(num.length()-2, 2));
    	}
    	else{
    		ans = toInt(num);
    	}
    	if (ans & (3)){
    		printf("NO\n");
    	}
    	else{
    		printf("YES\n");
    	}
    }
	return 0;
}