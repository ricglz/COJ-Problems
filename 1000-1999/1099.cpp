#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){
	int numbers[3];
	scanf("%i", &numbers[0]);
	while(numbers[0]){
		for (int i = 1; i < 3; ++i){
			scanf("%i", &numbers[i]);
		}
		sort(numbers, numbers+3);
		if (numbers[2]*numbers[2]==numbers[0]*numbers[0]+numbers[1]*numbers[1]){
			printf("right\n");
		}
		else{
			printf("wrong\n");
		}
		scanf("%i", &numbers[0]);
	}
	return 0;
}