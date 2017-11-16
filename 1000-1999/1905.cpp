#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
#define MAX 20+1

void fastscan(int &number){
    bool negative = false;
    register int c;
    number = 0;
    c = getchar();
    if (c=='-'){
        negative = true;
        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tCases;
    fastscan(tCases);
    for (int i = 0; i < tCases; ++i){
    	
    }
	return 0;
}