#include <cstdio>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]){
	int n, cont=0;
	scanf("%i", &n);
	char word [n];
	scanf("%s", word);
	for (int i = 0; i < n; ++i){
		if (word[i]>=65 && word[i]<=90){
			cont++;
		}
	}
	printf("%i %i\n", cont, n-cont);
	return 0;
}