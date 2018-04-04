#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int testCases;
	cin >> testCases;
	while(testCases--){
		string digits;
		cin >> digits;
		long ans = -624;
		for (int i = 0; i < 13; ++i){
			ans += digits[i];
		}
		string sub = digits.substr(10, 3);
		stringstream gg(sub);
		long second = 0;
		gg >> second;
		ans += second*10;
		if (ans<1000){
			ans+=1000;
		}
		else if(ans>=10000){
			ans%=1000;
		}
		if (ans<1000){
			if (ans<100){
				if (ans<10){
					printf("000");
				}
				else{
					printf("00");
				}
			}
			else{
				printf("0");
			}
		}
		printf("%lu\n", ans);
	}
	return 0;
}