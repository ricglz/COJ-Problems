#include <string>
#include <vector>
#include <iostream>

using namespace std;

int factorial(int a){
	int factorial=1;
	while(a>1){
		factorial*=a--;
	}
	return factorial;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int testCases;
	cin >> testCases;
	for (int i = 0; i < testCases; ++i){
		int cant;
		cin >> cant;
		vector<string> v;
		string shit;
		for (int i = 0; i < cant; ++i){
			cin >> shit >> shit;
			int pos=0;
			bool repeated=false;
			while(!repeated && pos<v.size()){
				if(shit.compare(v[pos])==0){
					repeated=true;
				}
				pos++;
			}
			if (!repeated){
				v.push_back(shit);
			}
		}
		
		cout << comb << endl;
	}
	return 0;
}