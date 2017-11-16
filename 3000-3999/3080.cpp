#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
   cin.tie(0);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        char joy , igual;int a ,b ,  c;
        cin>>a>>joy>>b>>igual>>c;
        int resul;
        if(joy == '+'){ resul = a + b;
        }
        else if(joy == '-'){ resul = a - b;}
        else if(joy == '*'){resul = a * b;}
        else if(joy == '/'){if(b == 0){cout<<"No"<<'\n';continue;}
        else{
        resul = a / b;
        }
        }
        else {cout<<"No"<<'\n';continue;}
        if(resul == c){cout<<"Yes"<<'\n';}
        else{cout<<"No"<<'\n';}
    }
}