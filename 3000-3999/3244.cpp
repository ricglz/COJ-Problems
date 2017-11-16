#include <cstdio>

int main(int argc, char const *argv[]){
	int suma = 0, mayorSuma, mushrooms, primeros[4], ultimos[4];
	for (int i = 0; i < 4; ++i){
		scanf("%i", &mushrooms);
		primeros[i]=mushrooms;
		suma+=mushrooms;
	}
	mayorSuma=suma;
	for (int i = 0; i < 4; ++i){
		suma-=primeros[i];
		scanf("%i", &mushrooms);
		ultimos[i]=mushrooms;
		suma+=mushrooms;
		if(suma>mayorSuma){
			mayorSuma=suma;
		}
	}
	for (int i = 0; i < 3; ++i){
		suma+=primeros[i]-ultimos[i];
		if(suma>mayorSuma){
			mayorSuma=suma;
		}
	}
	printf("%i\n", mayorSuma);
	return 0;
}
