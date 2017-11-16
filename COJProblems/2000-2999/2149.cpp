#include <cstdio>
#include <cstring>

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%i", &testCases);
	for (int i = 0; i < testCases; ++i){
		char cadena [101];
		scanf("%s", cadena);
		int cap, low, longitud = strlen(cadena);
		cap=low=0;
		for (int pos = 0; pos < longitud; ++pos){
			if (cadena[pos]>=65 && cadena[pos]<=90){
				cap++;
			}
			else if (cadena[pos]>=97 && cadena[pos]<=122){
				low++;
			}
		}
		if (cap==low){
			printf("SI\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}