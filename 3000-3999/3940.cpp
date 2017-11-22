#include <set>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[]){
	int t;
	scanf("%i", &t);
	while(t--){
		long long items;
		scanf("%lli", &items);
		set <long long> numbers;
		for (int i = 0; i < items; ++i){
			long long temp;
			scanf("%lli", &temp);
			numbers.insert(temp);
		}
		long long longitud = numbers.size();
		printf("%lli\n", (1 << longitud)%1000000007);
	}
	return 0;
}