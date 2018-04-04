#include <cstdio>
#include <cstring>

int main(int argc, char const *argv[]){
	char figure [20];
	scanf("%s", figure);
	long a, b;
	if (strcmp(figure, "rectangle")==0){
		scanf("%lu%lu", &a, &b);
		printf("%lu\n", a*b);
	}
	else{
		scanf("%lu", &a);
		printf("%lu\n", a*a);
	}
	return 0;
}