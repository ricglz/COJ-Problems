#include <cstdio>

int main(int argc, char const *argv[]){
	long numberOfVertices, numberOfEdges;
	scanf("%lu%lu", &numberOfVertices, &numberOfEdges);
	for (int i = 0; i < numberOfEdges; ++i){
		int aux1, aux2;
		scanf("%i%i", &aux1, &aux2);
	}
	if (numberOfEdges%6){
		printf("no\n");
	}
	else{
		printf("yes\n");
	}
	return 0;
}