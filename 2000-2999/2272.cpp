#include <cstdio>
#include <vector>

using namespace std;

vector <long long> primes;

bool isPrime(long long num){
	for (int i = 0; i < primes.size(); ++i){
		if (num%primes[i]==0){
			return false;
		}
	}
	primes.push_back(num);
	return true;
}
 
void SieveOfAtkin(long long limit)
{
    if (limit > 2)  primes.push_back(2);
    if (limit > 3)  primes.push_back(3);
    bool sieve[limit];
    for (long long i=0; i<limit; i++)
        sieve[i] = false;
    for (long long x = 1; x*x < limit; x++)
    {
        for (long long y = 1; y*y < limit; y++)
        {
            // Main part of Sieve of Atkin
            long long n = (4*x*x)+(y*y);
            if (n <= limit && (n % 12 == 1 || n % 12 == 5))
                sieve[n] ^= true;
 
            n = (3*x*x)+(y*y);
            if (n <= limit && n % 12 == 7)
                sieve[n] ^= true;
 
            n = (3*x*x)-(y*y);
            if (x > y && n <= limit && n % 12 == 11)
                sieve[n] ^= true;
        }
    }
    for (long long r = 5; r*r < limit; r++)
    {
        if (sieve[r])
        {
            for (long long i = r*r; i < limit; i += r*r)
                sieve[i] = false;
         }
    }
    for (long long a = 5; a < limit; a++)
        if (sieve[a])
        	primes.push_back(a);
}

int main(int argc, char const *argv[]){
	SieveOfAtkin(7384302);
	long long amountOfNumbers;
	scanf("%lli", &amountOfNumbers);
	while(amountOfNumbers--){
		long long num;
		scanf("%lli", &num);
		long long pos=0;
		if(num >= primes[primes.size()-1]){
			if (!(num%2)){
				num++;
			}
			while(!(isPrime(num))){num+=2;}
			printf("%lli\n", num);
		}
		else{
			for (; primes[pos] <= num; ++pos){

			}	
			printf("%lli\n", primes[pos]);
		}
	}
	return 0;
}