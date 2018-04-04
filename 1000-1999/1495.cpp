#include <cstdio>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

int main(int argc, char const *argv[]){
	int n;
	priority_queue <int, vector <int>, greater<int> > numbers;
	scanf("%u", &n);
	while(n--){
		int temp;
		scanf("%u", &temp);
		numbers.push(temp);
	}
	while(!numbers.empty()){
		printf("%u\n", numbers.top());
		numbers.pop();
	}
	return 0;
}