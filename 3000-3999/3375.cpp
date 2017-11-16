#include <cstdio>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%i", &testCases);
	for (int i = 0; i < testCases; ++i){
		char original [101], final [101];
		scanf("%s%s", original, final);
		int longitud = strlen(original), cantidad=0;
		for (int pos1 = 0; pos1 < longitud; ++pos1){
			if (original[pos1]!=final[pos1]){
				cantidad++;
			}
		}
		printf("%i\n", cantidad);
	}
	return 0;
}