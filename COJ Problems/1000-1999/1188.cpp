#include <cstdio>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]){
	char n1[13], n2[13];
	int suma=0;
	scanf("%s", n1);
	scanf("%s",n2);
	for (int i = 0; i < strlen(n1); ++i){
		for (int i2 = 0; i2 < strlen(n2); ++i2){
			suma += (n1[i]-48) * (n2[i2]-48);
		}
	}
	printf("%i\n", suma);
	return 0;
}