#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

void mySwap(int& i, int& j)
{  int temp;
   if(i>j){
      temp=i;
      i=j;
      j=temp;
   }
}

int main()
{   int a,b,c;
    string cad;
    cin>>a>>b>>c>>cad;
    mySwap(a,b);
    mySwap(a,c);
    mySwap(b,c);
    if(cad=="ABC") printf("%d %d %d\n",a,b,c);
    else if(cad=="ACB") printf("%d %d %d\n",a,c,b);
    else if(cad=="BAC") printf("%d %d %d\n",b,a,c);
    else if(cad=="BCA") printf("%d %d %d\n",b,c,a);
    else if(cad=="CAB") printf("%d %d %d\n",c,a,b);
    else if(cad=="CBA") printf("%d %d %d\n",c,b,a);        
    return 0;
}