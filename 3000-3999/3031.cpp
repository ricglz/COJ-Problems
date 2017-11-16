#include <cstdio>

using namespace std;

int main(){
    int n, d, e;
    scanf("%d", &n);
    scanf("%d", &d);
    while (n && d){
        if (n >= d){
            e = n / d;
            n %= d;
        }
        else{
            e=0;
        }
        printf("%d %d / %d\n", e, n, d);
        scanf("%d", &n);
        scanf("%d", &d);
    }
    return 0;
}