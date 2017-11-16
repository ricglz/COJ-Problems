#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){
	int cant;
	scanf("%i", &cant);
	string keys[cant];
	for (int i = 0; i < cant; ++i){
		char temp[32];
		scanf("%s",temp);
		keys[i]=temp;
		sort(keys[i].begin(), keys[i].end());
	}
	sort(keys, keys+cant);
	int length = cant;
	for (int i = 0; i < length; ++i){
		if(keys[i]==keys[i-1]){
			cant--;
		}
	}
	printf("%i\n", cant);
	return 0;
}