#include <cstdio>

int main(int argc, char const *argv[]){
	int angle;
	while(scanf("%u", &angle) != EOF){
		if (angle%6){
			printf("N\n");
		}
		else{
			printf("Y\n");
		}
	}
	return 0;
}