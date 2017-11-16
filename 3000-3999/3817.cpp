#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long divisor){
	if (divisor==2 || divisor==3 || divisor==5 || divisor==7 || divisor==11 || divisor==13){
		return true;
	}
	else if(divisor%2!=0 || divisor%3!=0 || divisor%5!=0 || divisor%7!=0 || divisor%11!=0 || divisor%13!=0){
		double root = sqrt(divisor);
		for (long i = 3; i <=root; i+=2){
			if (divisor%i==0){
				return false;
			}
		}
		return true;
	}
	return false;
}

int main(int argc, char const *argv[]){
	int integers;
	cin >> integers;
	for (int i = 0; i < integers; ++i){
		long n, divisor = 2;
		cin >> n;
		bool mas2=false, noPrimero=false;
		while(n!=1){
			if(isPrime(divisor) && n%divisor==0){
				if (noPrimero){
					cout << " ";
				}
				cout << divisor;
				n/=divisor;
				noPrimero=true;
				if (divisor>2){
					mas2=true;
				}
			}
			else if(mas2){
				divisor+=2;
			}
			else{
				divisor++;
			}
		}
		cout << endl;
	}
	return 0;
}