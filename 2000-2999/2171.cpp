#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct interval{
	long low;
	long high;

	bool overlap(interval i2){
		return (low <= i2.high && i2.low <= high);
	}
};

int main(int argc, char const *argv[]){
	long n;
	scanf("%lu", &n);
	vector <interval> time(n);
	long occurences = 1;
	for (int i = 0; i < n; ++i){
		scanf("%lu%lu", &time[i].low, &time[i].high);
		int count = 1;
		for (int j = 0; j < i; ++j){
			if (time[i].overlap(time[j])){
				count++;
			}
		}
		if (count > occurences){
			occurences = count;
		}
	}
	printf("%lu\n", occurences);
	return 0;
}