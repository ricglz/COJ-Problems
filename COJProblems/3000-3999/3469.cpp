#include <cstdio>
#include <numeric>

using namespace std;

int main(int argc, char const *argv[]){
	long long donors, mitad=0;
	scanf("%lli", &donors);
	long long donations[donors], result[donors];
	for (long long i = 0; i < donors/2; ++i){
		scanf("%lli", &donations[i]);
		mitad+=donations[i];
	}
	long long totalS=mitad;
	for (long long i = donors/2; i < donors; ++i){
		scanf("%lli", &donations[i]);
		totalS+=donations[i];
	}
	long long quary;
	scanf("%lli", &quary);
	long long quaries[quary];
	for (long long i = 0; i < quary; ++i){
		scanf("%lli", &quaries[i]);
	}
	partial_sum(donations, donations+donors, result);
	for (long long i = 0; i < quary ; ++i){
		if (quaries[i]<=mitad){
			for (long long i2 = 0; i2 < donors/2; ++i2){
				if(result[i2]>=quaries[i]){
					printf("%lli\n", i2+1);
					break;
				}
			}
		}
		else if(quaries[i]==totalS){ 
			printf("%lli\n", donors);
		}
		else if(quaries[i]<totalS){
			for (long long i2 = donors/2; i2 < donors; ++i2){
				if(result[i2]>=quaries[i]){
					printf("%lli\n", i2+1);
					break;
				}
			}

		}
		else if(quaries[i]>totalS){
			printf("none\n");
		}
	}
	return 0;
}