#include <cstdio>
#include <cmath>

using namespace std;

long long radius, vertex;

#define PI 3.1415927
//atan(1) * 4;

int main(){
	scanf("%llu%llu", &radius, &vertex);
	while (radius || vertex){
		if (vertex < 1e7){
			long double angle = 4*PI/vertex, A1 = radius*radius*sin(angle)/2, 
						B = radius*sqrt(2 - 2*cos(angle)), h = A1 * 2 / B, 
						A2 = h*h * tan(angle/4);
			printf("%.7Lf\n", A1*vertex - A2*vertex);
		} 
		else{
			printf("%.7lf\n", PI*radius*radius);
		}
		scanf("%llu%llu", &radius, &vertex);
	}
}