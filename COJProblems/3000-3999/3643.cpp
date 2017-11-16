#include <cstdio>
#include <vector>

const int INF = (1<<30);
const int MAX = 100000;

using namespace std;

vector<long> v;

void llenarV(){
	long sum=1;
	for (int i = 2; sum <= 100000; ++i){
		v.push_back(sum);
		sum = i*(i+1)/2;
	}
}

int main(int argc, char const *argv[]){
	long n;
	llenarV();
	int arr [MAX];
	arr[0]=0;
	for (int i = 1; i < MAX; ++i){
		arr[i]=INF;
	}
	for(int i=1;i<=MAX;i++) {
    	for(int j=0;j<v.size();j++) {
      		if(v[j] <= i) 
      			arr[i] = min(arr[i - v[j]] + 1, arr[i]);
    	}
  	}
	while(scanf("%li", &n) != EOF){
		printf("%i\n", arr[n]);
	}
	return 0;
}