#include <queue>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, aux;
	cin >> n;
	priority_queue <int, vector <int>, greater<int> > nums;
	for(int x=1; x <= n; x++){
		cin >> aux;
		nums.push(aux);
	}
	while(!nums.empty()){
		cout << nums.top() << endl;
		nums.pop();
	}
	return 0;
}