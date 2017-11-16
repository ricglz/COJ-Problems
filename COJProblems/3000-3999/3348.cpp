#include <cstdio>

using namespace std;

int main(int argc, char const *argv[]){
	int participants, supWins;
	scanf("%i%i", &participants, &supWins);
	printf("%i\n", supWins>=((participants/2)+(participants%2)) ? -1 : participants*supWins);
	return 0;
}