#include <cstdio>
#include <cmath>

using namespace std;

long long primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,
	113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,
	257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,
	409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547, 557,563,569,
	571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709};


long long sumDivisors(long long n){
	long long sum=n+1;
	long root=sqrt(n);
	root+= (root*root==n ? 0 : 1);
    // Note that this loop runs till square root
    for (long long i=0; primes[i]<=root; i++){
    	if (n%primes[i]==0){
        	sum+=primes[i];
            if (n/primes[i] != primes[i]){
            	sum+=n/primes[i];
            }
        }
    }
    return sum;
}

void fastscan(long long &number){
	//bool negative = false;
    register long long c;number = 0;
    c = getchar();
    /*if (c=='-'){
        negative = true;
        c = getchar();
    }*/
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    /*if (negative)
        number *= -1;*/
}


int main(int argc, char const *argv[]){
	/*for (long i = 1; i <= 500000; ++i){
		printf("%li %lli\n", i, sumDivisors(i));
	}*/
	long long testCase;
	fastscan(testCase);
	//for (int i = 0; i < testCase; ++i){
	while(testCase--){
		long long n, k, div=0;
		fastscan(n);
		fastscan(k);
		if(k!=1){
			while(n%k==0){
				n/=k;
			}
			div+=sumDivisors(n);
		}
		printf("%lli\n", div);
		fflush(stdout);
	}
	return 0;
}