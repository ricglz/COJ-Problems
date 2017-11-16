#include <cstdio>
#include <vector>
#include <set>

using namespace std;

int main(int argc, char const *argv[]){
	int nSets;
	vector<long> v;
	scanf("%i", &nSets);
	for (int set = 0; set < nSets; ++set){
		int nElements;
		scanf("%i", &nElements);
		long element;
		for (int i = 0; i < nElements; ++i){
			scanf("%li", &element);
			v.push_back(element);
		}
	}
	set<long> s;
	unsigned size = v.size();
	for (int i = 0; i < size; ++i) 
		s.insert(v[i]);
	printf("%li\n", s.size());
	return 0;
}