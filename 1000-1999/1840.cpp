#include <cstdio>
#include <cstring>

bool isSecure(int amount[]){
	for (int i = 1; i < 6; ++i){
		if (amount[i]!=amount[i-1]){
			return true;
		}
	}
	return false;
}

int main(int argc, char const *argv[]){
	int testCases;
	char word [200];
	scanf("%i", &testCases); //lees cantidad de test cases
	while(testCases--){
		int amount [] = {0, 0, 0, 0, 0, 0};
		scanf("%s", word);
		for (int i = 0; i < strlen(word); ++i){
			if(word[i]=='B')
				amount[0]++;
			else if(word[i]=='R')
				amount[1]++;
			else if(word[i]=='O')
				amount[2]++;
			else if(word[i]=='K')
				amount[3]++;
			else if(word[i]=='E')
				amount[4]++;
			else if(word[i]=='N')
				amount[5]++;
		}
		if(isSecure(amount))
			printf("Secure\n");
		else{
			printf("No Secure\n");
		}

	}
	return 0;
}