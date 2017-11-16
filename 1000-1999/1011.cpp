#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int ng, nm;
		cin >> ng >> nm;
		int mG=0, mM=0;
		for (int x = 0; x < ng; ++x)
		{
			int temp;
			cin >> temp;
			if (temp>mG){
				mG=temp;
			}
		}
		for (int x = 0; x < nm; ++x)
		{
			int temp;
			cin >> temp;
			if (temp>mM)
			{
				mM=temp;
			}
		}
		if (mG>=mM){
			cout << "Godzila" << endl;
		}
		else {
			cout << "MechaGodzilla" << endl;
		}
	}
}