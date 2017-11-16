#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){
	int objects, soldiers, ganancias=0;
	scanf("%i%i", &objects, &soldiers);
	int values[objects];
	for (int i = 0; i < objects; ++i){
		scanf("%i", &values[i]);
	}
	sort(values, values+objects);
	for (int i = 0; i < soldiers && values[i] < 0; ++i){
		ganancias-=values[i];
	}
	printf("%i\n", ganancias);
	return 0;
}