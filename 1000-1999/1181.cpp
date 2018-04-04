#include <cstdio>
#include <vector>

using namespace std;

vector <long long> population;

void llenar(){
	population.push_back(0);
	population.push_back(1);
	int tam = population.size();
	while(population.size()<100){
		population.push_back(population[tam-1]+population[tam-2]);
		tam++;
	}
	for (int i = 1; i < population.size(); ++i){
		population[i] += population[i-1];
	}
}

int main(int argc, char const *argv[]){
	llenar();
	long long n;
	scanf("%llu", &n);
	while(n!=-1){
		printf("%llu %llu\n", population[n], population[n+1]);
		scanf("%llu", &n);
	}
	return 0;
}