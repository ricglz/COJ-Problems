#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]){
  int coordinates;
  scanf("%i", &coordinates);
  double coordinatesX [coordinates], coordinatesY[coordinates];
  for (int i = 0; i < coordinates; ++i){
    scanf("%lf", &coordinatesX[i]);
    scanf("%lf", &coordinatesX[i]);
  }
  double ans=0;
  for (int i = 1; i < coordinates; ++i){
    ans += sqrt(pow(coordinatesX[i]-coordinatesX[i-1],2)+pow(coordinatesY[i]-coordinatesY[i-1],2));
  }
  printf("%.2lf\n", ans);
  return 0;
}