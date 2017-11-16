#include <cstdio>

int main(int argc, char const *argv[])
{
	for (int i = 0; i < 10; ++i){
		int numero = 1 +(i%2==0 ? 1 : 0);
		printf("%i\n", numero);
	}
	return 0;
}