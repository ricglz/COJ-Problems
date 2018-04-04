#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

bool isSubSequence(string s1, string s2){
	//printf("caca\n");
	long lengthI = s1.length()+1, lengthJ = s2.length()+1;
	long sbs [lengthI] [lengthJ];
	for (long i = 0; i < lengthI; ++i){
		sbs[i][0]=0;
	}
	for (long i = 1; i < lengthJ; ++i){
		sbs[0][i]=0;
	}
	//printf("cacax2\n");
	for (long i = 0; i < s1.length(); ++i){
		for (long j = 0; j < s2.length(); ++j){
			if (s1[i]==s2[j]){
				sbs[i+1][j+1]=sbs[i][j]+1;
			}
			else{
				sbs[i+1][j+1] = max(sbs[i][j+1], sbs[i+1][j+1] = sbs[i+1][j]);
			}
		}
	}
	//printf("cacax3\n");
	return (sbs[s1.length()][s2.length()]==s1.length());
}

int main(int argc, char const *argv[]){
	string s1, s2;
	while(cin >> s1 >> s2){
		if (isSubSequence(s1, s2)){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}