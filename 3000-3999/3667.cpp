#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
	int wordsQ;
	cin >> wordsQ;
	string words [wordsQ], finalWord;
	for (int i = 0; i < wordsQ; ++i){
		cin >> words[i];
		long tam = finalWord.length();
		if (i){
			int j=words[i].length();
			cout << finalWord.substr(tam-1-j, j) << endl;
			cout << words[i].substr(0, j) << endl;
			while(words[i].substr(0, j)!=finalWord.substr(tam-1-j, j) && j>0){
				cout << "caca" << endl;
				j--;
			}
			finalWord+=words[i].substr(j-1,words[i].length()-j);
		}
		else{
			finalWord+=words[i];
		}
	}
	cout << finalWord << endl;
	return 0;
}