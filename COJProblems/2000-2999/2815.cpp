#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; ++i){
    	string t, p;
    	cin >> t >> p;
    	int contador=0, posA=0, pos=t.find(p[posA]);
    	while(pos!=-1){
    		t.erase(pos,1);
    		posA++;
    		if (posA==p.length()){
    			contador++;
    			posA=0;
    		}
    		pos=t.find(p[posA]);
    	}
    	printf("%i\n", contador);
    }
	return 0;
}