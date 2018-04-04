#include <cstdio>
#include <cstring>

using namespace std;

int max(int a, int b){
	if (a>b){
		return a;
	}
	return b;
}

int lcs(char sequence1[], char sequence2[]){
	int tam1 = strlen(sequence1), tam2 = strlen(sequence2), matrix[tam1][tam2], solution=0;
	if (sequence1[0]==sequence2[0]){
		matrix[0][0]=solution=1;
		}
	else{		
		matrix[0][0]=0;
	}
	for (int columns = 1; columns < tam2; ++columns){
		if (sequence1[0]==sequence2[columns]){
			matrix[0][columns]=solution=1;
		}
		else{
			matrix[0][columns]=max(0, matrix[0][columns-1]);
		}
	}
	for (int lines = 1; lines < tam1; ++lines){
		if (sequence1[lines]==sequence2[0]){
			matrix[lines][0]=1;
			if (solution<matrix[lines][0]){
				solution = matrix[lines][0];
				}
		}
		else{
			matrix[lines][0]=matrix[lines-1][0];
		}
		for (int columns = 1; columns < tam2; ++columns){
			if (sequence1[lines]==sequence2[columns]){
				matrix[lines][columns]=matrix[lines-1][columns-1]+1;
				if (solution<matrix[lines][columns]){
					solution = matrix[lines][columns];
					}
			}
			else{
				matrix[lines][columns]=max(matrix[lines-1][columns], matrix[lines][columns-1]);
			}
		}
	}
	return (solution==strlen(sequence1));
}

int main(int argc, char const *argv[]){
	char original[300], subsequence[300];
	while(scanf("%s%s", original, subsequence) != EOF){
		if (lcs(original, subsequence)){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}