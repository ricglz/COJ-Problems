#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){
	int competitors;
	scanf("%i",&competitors);
	int values [competitors];
	for (int i = 0; i < competitors; ++i){
		scanf("%i", &values[i]);
	}
	sort(values, values+competitors);
	int min = values[0] + values[competitors-1];
	for (int i = 1; i < competitors/2; ++i){
		int temp = values[i] + values[competitors-1-i];
		if (temp<min){
			min=temp;
		}
	}
	printf("%i\n", min);
	return 0;
}