#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int a, b, c, l1, l2, hi;
	while(cin >> a >> b >> c, a && b && c){
		if(a > b){
			l1 = b;
			if(a > c){
				hi = a;
				l2 = c;
			}
			else{
				hi = c;
				l2 = a;
			}
		}
		else{
			l1 = a;
			if(b > c){
				hi = b;
				l2 = c;
			}
			else{
				hi = c;
				l2 = b;
			}
		}
		if((l1*l1+l2*l2)==(hi*hi)) printf("right\n");
		else printf("wrong\n");
	}
	return 0;
}