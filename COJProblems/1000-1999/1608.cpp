#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

typedef struct {
	char seq [101];
	long changes;
	int i;
}dna;

dna datas [101];

void bubbleSort(int index){
	int i,j,res=0, l=strlen(datas[index].seq);
	char copie [101];
	strcpy(copie, datas[index].seq);
    for(i=0;i<l;i++){
        for(j=l-1;j>i;j--){
            if(copie[j] < copie[j-1]){
                copie[j] ^= copie[j-1];
                copie[j-1] ^= copie[j];
                copie[j] ^= copie[j-1];
                res++;
            }
        }
    }
    datas[index].changes = res;
}

int compare(const void* a, const void* b){
    dna* a1 = (dna*)a;
    dna* b1 = (dna*)b;
    if(a1->changes == b1->changes){
        return strcmp(a1->seq,b1->seq);
    }
    return a1->changes - b1->changes;
}

int main(){
	int longitud, cantidad;
	scanf("%i%i", &longitud, &cantidad);
	bool second=false;
	while(longitud && cantidad){
		if (second){
			printf("\n");
		}
		for (int x = 0; x < cantidad; ++x){
			scanf("%s", datas[x].seq);
			datas[x].i=x;
			bubbleSort(x);
		}
		qsort(datas, cantidad, sizeof(dna), compare);
		for (int i = 0; i < cantidad; ++i){
			printf("%s\n", datas[i].seq);
		}
		scanf("%i%i", &longitud, &cantidad);
		second=true;
	}
	return 0;
}
