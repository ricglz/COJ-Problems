#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

map <vector<string>, int> data;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int amount, max=0;
	string name1, name2, name3, key;
	vector <string> myVector;
	myVector.push_back(name1);
	myVector.push_back(name2);
	myVector.push_back(name3);
	scanf("%u", &amount);
	while(amount--){
		cin >> myVector[0] >> myVector[1] >> myVector[2];
		sort(myVector.begin(), myVector.end());
		data[myVector]++;
		if (data[myVector]>max){
			max =  data[myVector];
		}
	}
	printf("%u\n", max);
	return 0;
}