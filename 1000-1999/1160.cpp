#include <cstdio>
#include <cstdlib>

int main (){
  int t;
  scanf ("%u", &t);
  while (t--){
      int x, y;
      scanf ("%u%u", &x, &y);
      if ((y % 2 && x % 2 == 0) || (y % 2 == 0 && x % 2))
        printf ("No Number\n");
      else if(x==y || abs(x-y)==2){
        int ans = x + y;
        if (x & 1)
          ans--;
        printf ("%u\n", ans);
      }
      else{
        printf("No Number\n");
      }
    }
}
