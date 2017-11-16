#include <cstdio>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]){
	char letras [100010];
	scanf("%s", letras);
	long long int mult=1;
	for (int i = 0; i < strlen(letras) && mult!=0; ++i){
		mult=((letras[i]-64)*mult)%26;
	}
	if(mult<10){
		printf("%i", 0);
	}
	printf("%lli\n", mult);
	return 0;
}