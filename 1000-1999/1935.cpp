#include <cstdio>

int main(int argc, char const *argv[]){
	long velocity, time;
	while(scanf("%li%li", &velocity, &time) != EOF){
		if (velocity || time){
			long ans=2*velocity*time;
			printf("%li\n", ans);
		}
		else{
			printf("0\n");
		}
	}
	return 0;
}