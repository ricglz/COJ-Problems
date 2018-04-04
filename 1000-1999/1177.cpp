#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

void swap(char& a, char& b){
	char temp = a;
	a = b;
	b= temp;
}

void reverse(string frag){
	int changes = frag.length()/2;
	for (int i = 0; i < changes; ++i){
		swap(frag[i], frag[frag.length()-1-i]);
	}
	cout << frag;
}

int main(int argc, char const *argv[]){
	int groups, dif;
	string s;
	scanf("%u", &groups);
	while(groups){
		cin >> s;
		dif = s.length()/groups;
		for (int i = 0; i < s.length(); i+=dif){
			reverse(s.substr(i, dif));
		}
		printf("\n");
		scanf("%u", &groups);
	}
	return 0;
}