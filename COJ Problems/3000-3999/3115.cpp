
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int testCases, testPiles, maxi, spaces;
    scanf("%d", &testCases);
    for (int x = 0; x < testCases; x++)
    {
        scanf("%d", &testPiles);
        int upper[testPiles], lower[testPiles];
        maxi = 0;
        spaces = 0;
        for (int y = 0; y < testPiles; y++)
        {
            scanf("%d", &upper[y]);
            scanf("%d", &lower[y]);
            if ( upper[y] + lower[y] > maxi)
            {
                maxi = upper[y] + lower[y];
            }
        }
        for (int z = 0; z < testPiles; z++)
        {
            if (upper[z] + lower[z] < maxi)
            {
                spaces += maxi - (upper[z] + lower[z]);
            }
        }
        printf("%d\n", spaces);
    }
    return 0;
}