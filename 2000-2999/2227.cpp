#include <cstdio>
#include <vector>

using namespace std;

int solution[10][10]={0};
vector <vector <int> > map;
int iAux, jAux;		

void solve(int i, int j, int i2, int j2){
	solution[i][j] = solution[i2][j2];
	if (map[i][j] < map[i2][j2]){
		solution[i][j] += map[i2][j2]-map[i][j]; 
	}
}

void bestPath(int i, int j, int i2, int j2){
	if (solution[i][j]<solution[i2][j2]){
		iAux = i;
		jAux = j;
	}
	else{
		iAux = i2;
		jAux = j2;
	}
}

int main(int argc, char const *argv[]){
	int dimensions;
	scanf("%u", &dimensions);
	for (int i = 0; i < dimensions; ++i){
		vector <int> aux(dimensions,0);
		for (int j = 0; j < dimensions; ++j){
			scanf("%u", &aux[j]);
		}
		map.push_back(aux);
	}
	for (int i = 1; i < dimensions; ++i){
		solve(0, dimensions-i-1, 0, dimensions-i);
		solve(i, dimensions-1, i-1, dimensions-1);
	}
	for (int loop = 1; loop < dimensions; ++loop){
		bestPath(loop-1, dimensions-1-loop, loop, dimensions-loop);
		solve(loop, dimensions-1-loop, iAux, jAux);
		for (int i = loop+1; i < dimensions; ++i){
			
			bestPath(loop-1, dimensions-1-i, loop, dimensions-i);
			solve(loop, dimensions-1-i, iAux, jAux);
			
			bestPath(i-1, dimensions-1-loop, i, dimensions-loop);
			solve(i, dimensions-1-loop, iAux, jAux);
		}
	}
	printf("%u\n", solution[dimensions-1][0]);
	return 0;
}