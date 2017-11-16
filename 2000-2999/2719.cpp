#include <cstdio>
#include <cmath>

typedef long double LD;

LD max(LD a, LD b){
	if (a>b){
		return a;
	}
	return b;
}

LD min(LD a, LD b){
	if (a<b){
		return a;
	}
	return b;
}

int main(int argc, char const *argv[]){
	long m, n;
	scanf("%li%li", &n, &m);
	LD maxD, coordinatesX[m+n], coordinatesY[m+n], sumXY[m+n];
	for (int i = 0; i < m+n; ++i){
		scanf("%Lf%Lf", &coordinatesX[i], &coordinatesY[i]);
		sumXY[i]=coordinatesX[i]+coordinatesY[i];
	}
	long posm, posM;
	posm=posM=0;
	LD min, max;
	min=max=sumXY[0];
	for (int i = 1; i < m+n; ++i){
	 	if (min>sumXY[i]){
	 		min=sumXY[i];
	 		posm=i;
	 	}
	 	else if(max<sumXY[i]){
	 		max=sumXY[i];
	 		posM=i;
	 	}
	}
	LD difX=coordinatesX[posM]-coordinatesX[posm], difY=coordinatesY[posM]-coordinatesY[posm];
	maxD = sqrt(difX*difX + difY*difY);
	printf("%.4LF\n", maxD);
	return 0;
}