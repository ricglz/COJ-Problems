#include <cstdio>

int main(int argc, char const *argv[]){
	long donors;
	scanf("%li", &donors);
	long donations[donors];
	for (int i = 0; i < donors; ++i){
		scanf("%li", &donations[i]);
	}
	long quary;
	scanf("%li", &quary);
	long quaries[quary];
	for (int i = 0; i < quary; ++i){
		scanf("%li", &quaries[i]);
	}
	for (int i = 0; i < quary ; ++i){
		bool alcanzo=false;
		long x=0, total=0;
		while(!alcanzo && x<donors){
			total+=donations[x];
			if (total>=quaries[i]){
				alcanzo=true;
			}
			x++;
		}
		if (alcanzo){
			printf("%li\n", x);
		}
		else{
			printf("none\n");
		}
	}
	return 0;
}