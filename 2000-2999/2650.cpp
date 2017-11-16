#include <cstdio>

int main(int argc, char const *argv[]){
	double x, y, ans;
	scanf("%lf%lf", &x, &y);
	ans = 1-(y/x);
	printf("%.2lf\n", ans);
	return 0;
}