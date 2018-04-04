#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

bool isDivisible(char num []){
	long l = strlen(num);
	if (num[l-1]!='0' && num[l-1]!='5'){
		return false;
	}
	int sum1=0, sum2=0;
	for (int i = 0; i < l; ++i){
		if(i & 1)
			sum2+=num[i]-48;
		else
			sum1+=num[i]-48;
	}
	if(sum1<sum2)
		swap(sum1, sum2);
	if ((sum1-sum2)%11 && (sum1+sum2)%9){
		return false;
	}
	return true;

}

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%u", &testCases);
	char num [2000];
	while(testCases--){
		scanf("%s", num);
		if(isDivisible(num))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}