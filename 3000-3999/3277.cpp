#include <iostream>
#include <algorithm>    
#include <vector>       

using namespace std;

int main(int argc, char const *argv[]){
	int length;
	cin >> length;
	vector<int> v;
	for (int i = 0; i < length; ++i){
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	bool bien = true;
	int pos=1;
	while(bien && pos<length-1){
		if (v.at(pos)-v.at(pos-1)!=v.at(pos+1)-v.at(pos)){
			bien=false;
		}
		pos++;
	}
	if (bien){
		cout << "YES " << endl;
	}
	else{
		cout << "NO " << endl;
	}
	return 0;
}