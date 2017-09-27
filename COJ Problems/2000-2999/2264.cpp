#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m;
	cin >> n >> m;
	int x, y, count; //X es columnas y Y es renglones.
	cin >> y >> x >> count;
	int movY=0, movX=0;
	for (int i = 0; i < count; ++i)
	{
		char dir;
		int mag;
		cin >> dir >> mag;
		switch (dir){
			case 'N':
				movY+=mag;
				break;
			case 'S':
				movY-=mag;
				break;
			case 'W':
				movX+=mag;
				break;
			case 'E':
				movX-=mag;
				break;
		}
	}
	x+=movX;
	y+=movY;
	cout << y << " " << x << endl;
	return 0;
}