#include <iostream>
#include <stdlib.h>

#define FOR(a,b,c,d) for(a=b;a<c;a+=d)

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string c1;
	char p;
 	int t,sumE,sumO,i,j=0;
	while(getline(cin,c1)){
		if(j==0){
			t=atoi(c1.c_str());
	     	j++;
	    }
      	else{
      		sumE=0,sumO=0;
       		FOR(i,0,c1.length(),1){
       			p=c1.at(i);
		   		if((int(p)%2)==0) sumE++;
		   		else sumO++;
		  	}
		  	if(sumE > sumO)
		    	cout << "Even";
		  	else
		      	cout << "Odd";
		  	cout << endl;
		  	t--;
		  	if(t==0) break;
      	}
	}
	return 0;
}