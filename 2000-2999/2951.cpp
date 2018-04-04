#include <cstdio>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main(int argc, char const *argv[]){
	int cant;
	scanf("%i", &cant);
	string keys[cant];
	set <string> ans;
	for (int i = 0; i < cant; ++i){
		char temp[32];
		scanf("%s",temp);
		keys[i]=temp;
		sort(keys[i].begin(), keys[i].end());
		ans.insert(keys[i]);
	}
	printf("%lu\n", ans.size());
	return 0;
}