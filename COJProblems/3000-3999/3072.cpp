#include <cstdio>

int main(int argc, char const *argv[])
{
	int w;
	scanf("%i", &w);
	if (!(w%2) && w>2){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}