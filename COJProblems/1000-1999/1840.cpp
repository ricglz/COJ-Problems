#include <cstdio>
#include <cstring>

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%i", &testCases); //lees cantidad de test cases
	for (int i = 0; i < testCases; ++i){
		int virus[]= {0,0,0,0,0,0};
		char password[101];
		scanf("%s", password); //lees la contraseña
		for (int i2 = 0; i2 < strlen(password); ++i2){
			switch(password[i2]){
				case 'B':
					virus[0]++;
					break;
				case 'R':
					virus[1]++;
					break;
				case 'O':
					virus[2]++;
					break;
				case 'K':
					virus[3]++;
					break;
				case 'E':
					virus[4]++;
					break;
				case 'N':
					virus[5]++;
					break;
			}
		}
		bool todosIguales=true;
		int pos=0;
		while(pos<6 && todosIguales){
			if(virus[pos]==0){
				todosIguales=false;
			}
			else{
				pos++;
			}
		}
		if (todosIguales){
			printf("%s\n", "No Secure");
		}
		else{
			printf("%s\n", "Secure");
		}
	}
	return 0;
}