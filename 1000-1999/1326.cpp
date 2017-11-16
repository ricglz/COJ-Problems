#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int testCase;
	cin >> testCase;
	for (int i = 0; i < testCase; ++i){
		long balance;
		int transactions;
		cin >> balance >> transactions;
		for (int transaction = 0; transaction < transactions; ++transaction){
			char type;
			long movement;
			cin >> type >> movement;
			if (type=='C'){
				balance+=movement;
			}
			else{
				balance-=movement;
			}
		}
		cout << balance << endl;
	}
	return 0;
}