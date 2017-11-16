#include <cstdio>

int main(int argc, char const *argv[]){
	int rows, columns;
	long long int total=0;
	scanf("%i%i", &rows, &columns);
	int matriz[rows][columns];
	for (int i = 0; i < rows; ++i){
		for (int i2 = 0; i2 < columns; ++i2){
			scanf("%i", &matriz[i][i2]);
		}
	}
	for (int i = 0; i < rows; ++i){
		for (int i2 = 0; i2 < columns; ++i2){
			long cont=0;
			bool sigue=true;
			int mov=1;
			while(sigue && i+mov<rows){
				if(matriz[i+mov][i2]>=matriz[i][i2]){
					sigue=false;
				}
				mov++;
			}
			//cont+=sigue;
			total+=sigue;
			sigue=mov=1;
			while(sigue && i2+mov<columns){
				if(matriz[i][i2+mov]>=matriz[i][i2]){
					sigue=false;
				}
				mov++;
			}
			//cont+=sigue;
			total+=sigue;
			sigue=mov=1;
			while(sigue && i2-mov>=0){
				if(matriz[i][i2-mov]>=matriz[i][i2]){
					sigue=false;
				}
				mov++;
			}
			//cont+=sigue;
			total+=sigue;
			sigue=mov=1;
			while(sigue && i-mov>=0){
				if(matriz[i-mov][i2]>=matriz[i][i2]){
					sigue=false;
				}
				mov++;
			}
			//cont+=sigue;
			total+=sigue;
		}
	}
	printf("%lli\n", total);
	return 0;
}