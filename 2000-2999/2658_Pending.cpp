#include <cstdio>

#define LL long double

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%i", &testCases);
	while(testCases--){
		LL third, thirdL, sum, length, diference, u1;
		scanf("%LF", &third);
		scanf("%LF", &thirdL);
		scanf("%LF", &sum);
		length = sum*2/(third+thirdL);
		diference = (thirdL-third)/(length-5);
		u1 = third - 2*diference;
		for (int i = 0; i < length; u1+=diference, i++){
			if (i){
				printf(" ");
			}
			printf("%.0LF", u1);
		}
		printf("\n");
	}
	return 0;
}