#include <cstdio>

int main(int argc, char const *argv[]){
	long long int a, b, c, discriminante;
	scanf("%lli%lli%lli", &a, &b, &c);
	discriminante = b*b - 4*a*c;
	if (discriminante>=0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}