#include <cstdio>

#define MAX 1000000007
using namespace std;

typedef long long int LL;

/*LL factorial(int n){
    LL fact=1;
    for (int i = 2; i <= n; ++i){
        fact*=i;
        if (fact>=MAX){
            fact%=MAX;
        }
        printf("%lli\n", fact);
    }
    return fact;
}*/

LL posibilidades(int n, int r);


int main(){
    int tests, n,r,p = MAX;
    scanf("%d", &tests);
    for (int x = 0; x < tests; x++){
        scanf("%d%d",&n,&r);
        LL answer=0;
        if (r==1){
            answer=1;
        } 
        else{
            answer=posibilidades(int n,r);
        }
        printf("%lli\n", answer%p);
    }
}
