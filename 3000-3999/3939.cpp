#include <cstdio>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]){
	char word[101];
	scanf("%s", word);
	int longitud = strlen(word);
	long totalS = (1+longitud)*longitud/2-1;
	printf("%li\n", totalS);
	return 0;
}