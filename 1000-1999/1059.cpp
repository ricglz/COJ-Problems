#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int l;
	scanf("%lli", &l);
	while(l){
		string bin="";
		long cont=0;
		while(l){
			if (l%2){
				bin='1'+bin;
				cont++;
			}
			else{
				bin = '0'+bin;
			}
			l/=2;
		}
		cout << "The parity of " << bin << " is " << cont << " (mod 2)." << endl;
		scanf("%lli", &l);
	}
	return 0;
}