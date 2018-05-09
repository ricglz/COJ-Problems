#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

bool isUpperCase(char c){
	return c>=65 && c<=90; 
}

bool isTautogram(string frase, int valor){
	bool espacio = false;
    for (int i = 1; i < frase.length(); ++i){
    	if(espacio){
    		int aux = frase[i];
    		if(!isUpperCase(aux)) aux-=32;
    		if(aux != valor) return false;
    		espacio = false;
    	}
    	if(frase[i]==' ') espacio = true;
    }
    return true;
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string frase;
    while(getline(cin,frase), frase!="*"){
    	int valor = frase[0];
    	if(!isUpperCase(frase[0])) valor-=32;
    	if(isTautogram(frase, valor)) printf("Y\n");
    	else printf("N\n");
    }
	return 0;
}