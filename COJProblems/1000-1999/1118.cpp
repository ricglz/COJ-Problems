#include <cstdio>

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%i", &testCases);
	for (int i = 0; i < testCases; ++i){
		int cant;
		scanf("%i", &cant);
		bool cells [cant];
		for (int i2 = 0; i2 < cant; ++i2){
			cells[i2]=true;
		}
		for (int run = 2; run <= cant; ++run){
			for (int pos = run-1; pos < cant; pos+=run){
				cells[pos] = cells[pos] ? false : true;
			}
		}
		long sum=0;
		for (int i2 = 0; i2 < cant; ++i2){
			sum+=cells[i2];
		}
		printf("%li\n", sum);
	}
	return 0;
}