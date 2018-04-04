#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

struct point{
	int id;
	int x;
	int y;

	double distance(int x2, int y2){
		return sqrt( pow(x-x2, 2) + pow(y-y2, 2) );
	}

};

int main(int argc, char const *argv[]){
	int amountOfPoints, pointS, pointE;
	scanf("%u", &amountOfPoints);
	vector <point> points;
	for (int i = 0; i < amountOfPoints; ++i){
		point aux;
		scanf("%u %u %u", &aux.id, &aux.x, &aux.y);
		points.push_back(aux);
	}
	scanf("%u %u", &pointS, &pointE);
	point aux = points[pointS-1];
	points.erase(points.begin() + pointS - 1);
	double sum = 0;
	while(points.size()!=0){
		int pos=0;
		double min = points[0].distance(aux.x, aux.y);
		for (int i = 1; i < points.size(); ++i){
			double distance = points[i].distance(aux.x, aux.y);
			if (distance < min){
				pos = i;
				distance = min;
			}
		}
		sum+=min;
		aux = points[pos];
		points.erase(points.begin() + pos);
	}
	printf("%.2lf\n", sum);
	return 0;
}