#include <string>
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string word;
	long length;
	int k;
	cin >> length >> word >> k;
	bool juanTurn = k%2;
	long juanS=0, pepeS=juanS;
	sort(word.begin(), word.end());
	int count = 0;
	char letter = 'A';
	for (int i = 0; i < length; ++i){
		if (word[i]!=letter){
			if (juanTurn){
				juanS += count * (length-i);
			}
			else{
				pepeS+=count * (length-i);
			}
			while(word[i]!=letter){
				letter++;
				juanTurn = !juanTurn;
			}
			count=1;
		}
		else{
			count++;
		}
	}
	if (juanS>pepeS){
		printf("JUAN %lu\n", juanS-pepeS);
	}
	else{
		printf("PEPE %lu\n", pepeS-juanS);
	}
	return 0;
}