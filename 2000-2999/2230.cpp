#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

bool greater(int a, int b){return (a>b);}

int main(int argc, char const *argv[]){
	int dimensions;
	scanf("%u", &dimensions);
	vector <int> a; 
	vector <int> b;
	for (int i = 0; i < dimensions; ++i){
		int aux;
		scanf("%i", &aux);
		a.push_back(aux);
	}
	for (int i = 0; i < dimensions; ++i){
		int aux;
		scanf("%i", &aux);
		b.push_back(aux);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), greater);
	long sum = a[0]*b[0];
	for (int i = 1; i < dimensions; ++i){
		sum += a[i]*b[i];
	}
	printf("%li\n", sum);
	return 0;
}