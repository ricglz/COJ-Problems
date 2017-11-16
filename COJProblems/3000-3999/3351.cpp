#include <cstdio>
#include <cstring>

using namespace std;

bool isPalindrome(char palabra[], int length){
	for (int i = 0; i < length/2; ++i){
		if(palabra[i]!=palabra[length-i-1]){
			return false;
		}
	}
	return true;
}

bool isWord(char palabra[], int length){
	for (int i = 0; i < length; ++i){
		switch(palabra[i]){
			case 'A':case 'W':case 'T':case 'Y':case 'U':case 'I':case 'O':case 'H':case 'X':
			case 'V':case 'M':
				break;
			default:
				return false;
		}
	}
	return true;
}

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%i", &testCases);
	for (int i = 0; i < testCases; ++i){
		char palabra [101];
		scanf("%s", palabra);
		int length = strlen(palabra);
		if (isPalindrome(palabra, length) && isWord(palabra, length)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}