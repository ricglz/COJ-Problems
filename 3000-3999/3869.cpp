#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){
	int ordenes;
	scanf("%i", &ordenes);
	int arr[ordenes];
	for (int i = 0; i < ordenes; ++i){
		scanf("%i", &arr[i]);
	}
	long segundos=arr[0]-1;
	for (int i = 1; i < ordenes; ++i){
		segundos+= abs(arr[i]-arr[i-1]);
	}
	segundos+=arr[ordenes-1]-1;
	printf("%li\n", segundos);
	return 0;
}