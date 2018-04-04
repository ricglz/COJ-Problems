#include <cstdio>
#include <map>

using namespace std;

map <long, long> values;

long mostValued(long num){
	if (values[num] || num==0){
		return values[num];
	}
	long change = mostValued(num/2) + mostValued(num/3) + mostValued(num/4);
	if (num > change){
		values[num] = num;
	}
	else{
		values[num] = change;
	}
	return values[num];
}

int main(int argc, char const *argv[]){
	for (int i = 1; i <= 10; ++i){
		long num, ans;
		scanf("%lu", &num);
		printf("%lu\n", mostValued(num));
	}
	return 0;
}