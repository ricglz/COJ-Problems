
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int n, d, e = 0;
    scanf("%d", &n);
    scanf("%d", &d);
    while (n != 0 && d != 0)
    {
        if (n >= d)
        {
            e = n / d;
            n = n % d;
        }
        printf("%d %d / %d\n", e, n, d);
        e = 0;
        scanf("%d", &n);
        scanf("%d", &d);
    }
    return 0;
}