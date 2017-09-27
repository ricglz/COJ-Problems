#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int sum;
	if (n < 0){
		sum = (n-1)*n*-1/2+1;
	}
	else{
		sum = (n+1)*n/2;
	}
	cout << sum << endl;
}