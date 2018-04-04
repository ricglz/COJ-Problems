#include <cstdio>
#include <vector>

using namespace std;

char abc[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 
			's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int main(int argc, char const *argv[]){
	int height;
	scanf("%u", &height);
	vector <vector <int> > second;
	vector <vector <long> > first;
	for (int i = 1; i <= height; ++i){
		vector <int> aux(height, 0);
		vector <long> aux2(height, 0);
		for (int j = 0; j < i; ++j){
			scanf("%u", &aux[j]);
			aux2[j] = aux[j]*aux[j];
		}
		first.push_back(aux2);
		second.push_back(aux);
	}
	for (int i = second.size()-2; i >= 0; --i){
		for (int j = second[i].size()-1; j >= 0; j--){
			if (second[i+1][j] > second[i+1][j+1]){
				second[i][j] += second[i+1][j];
				first[i][j] += first[i+1][j];
			}
			else{
				second[i][j] += second[i+1][j+1];
				first[i][j] += first[i+1][j+1];
			}
		}
	}
	printf("%lu %u\n", first[0][0], second[0][0]);
	printf("%c%c\n", abc[first[0][0]%26], abc[second[0][0]%26]);
	return 0;
}