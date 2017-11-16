#include <cstdio>

using namespace std;

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

	int n;
	fastscan(n);
	printf("%i\n", n>0 ? n*(n+1)/2 : 1+n*-1*(n-1)/2);
}