#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]){
	long radius;
	scanf("%lu", &radius);
	long double normalArea = 3.141593*radius*radius, 
							otherArea = radius*radius*2;
	printf("%.6Lf\n", normalArea);
	printf("%.6LF\n", otherArea);
	return 0;
}