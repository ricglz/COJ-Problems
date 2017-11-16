#include <cstdio>
#include <cstring>

char word [21];

bool mirror(){
	int longitud = strlen(word);
	for (int i = 0; i < longitud/2; ++i){
		switch(word[i]){
			case 'A':case 'H':case 'I':case 'M':case 'O':case 'T':case 'U':case 'V':case 'W':case 'X':
			case 'Y':case '1':case '8':
				if(word[i]!=word[longitud-1-i]){
					return false;
				}
				break;
			case 'E': 
				if (word[longitud-1-i]!='3'){
					return false;
				}
				break;
			case '3':
				if (word[longitud-1-i]!='E'){
					return false;
				}
				break;
			case 'L':
				if (word[longitud-1-i]!='J'){
					return false;
				}
				break;
			case 'J':
				if (word[longitud-1-i]!='L'){
					return false;
				}
				break;
			case 'Z':
				if (word[longitud-1-i]!='5'){
					return false;
				}
				break;
			case '5':
				if (word[longitud-1-i]!='Z'){
					return false;
				}
				break;
			case 'S': 
				if (word[longitud-1-i]!='2'){
					return false;
				}
				break;
			case '2':
				if (word[longitud-1-i]!='S'){
					return false;
				}
				break;
			default:
				return false;
		}
	}
	return true;
}

bool isPalindrome(){
	int longitud = strlen(word);
	for (int i = 0; i < longitud/2; ++i){
		if (word[i]!=word[longitud-1-i]){
			return false;
		}
	}
	return true;
}

int main(int argc, char const *argv[]){
	while(scanf("%s", word) != EOF){
		if (isPalindrome()){
			if (mirror()){
				printf("%s -- is a mirrored palindrome.\n", word);
			}
			else{
				printf("%s -- is a regular palindrome.\n", word);
			}
		}
		else{
			if (mirror()){
				printf("%s -- is a mirrored string.\n", word);
			}
			else{
				printf("%s -- is not a palindrome.\n", word);
			}
		}
	}
	return 0;
}