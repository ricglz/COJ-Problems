#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase;
    cin >> testCase;
	for (int i = 0; i < testCase; ++i){
		int n, occurences[8];
		string tosses;
		cin >> n >> tosses;
		for (int pos = 0; pos < 8; ++pos){
			occurences[pos]=0;
		}
		for (int pos = 0; pos < 38; ++pos){
			string temp = tosses.substr(pos,3);
			if (temp.compare("TTT")==0){
				occurences[0]++;
			}
			else if (temp.compare("TTH")==0){
				occurences[1]++;
			}
			else if (temp.compare("THT")==0){
				occurences[2]++;
			}
			else if (temp.compare("THH")==0){
				occurences[3]++;
			}
			else if (temp.compare("HTT")==0){
				occurences[4]++;
			}
			else if (temp.compare("HTH")==0){
				occurences[5]++;
			}
			else if (temp.compare("HHT")==0){
				occurences[6]++;
			}
			else{
				occurences[7]++;
			}
		}
		printf("%i", n);
		for (int pos = 0; pos < 8; ++pos){
			printf("% i", occurences[pos]);
		}
		printf("\n");
	}
	return 0;
}