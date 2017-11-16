#include <iostream>
#include <cstdio>

using namespace std;

int min(int a, int b){
	if (a<b){
		return a;
	}
	return b;
}

int max(int a, int b){
	if (a>b){
		return a;
	}
	return b;
}

int main(int argc, char const *argv[]){
	long arrows, black=0, white=0;
	scanf("%li", &arrows);
	while(arrows--){
		char letra;
		int pos;
		cin >> letra >> pos;
		if ((letra+pos)%2){
			white++;
		}
		else{
			black++;
		}
	}
	printf("%li\n", max(black, white)-min(black, white));
	return 0;
}