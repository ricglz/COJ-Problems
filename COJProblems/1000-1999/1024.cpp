#include <cstdio>

int main(int argc, char const *argv[]){
	double c;
	scanf("%lf", &c);
	while(c){
		double sum=0.5;
		int cards=1;
		while(sum<c){
			sum+=1.0/(++cards+1);
		}
		printf("%i card(s)\n", cards);
		scanf("%lf", &c);
	}
	return 0;
}