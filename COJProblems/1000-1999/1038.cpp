#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string number;
	cin >> number;
	while(number!="END"){
		if (number=="1"){
			cout << "1" << endl;
		}
		else if(number.length()<2){
			cout << "2" << endl;
		}
		else if (number.length()<10){
			cout << "3" << endl;
		}
		else{
			cout << "4" << endl;
		}
		cin >> number;
	}
	return 0;
}