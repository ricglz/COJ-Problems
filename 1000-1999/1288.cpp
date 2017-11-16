#include <cstdio>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%i",&testCases);
	for (int i = 0; i < testCases; ++i){
		char number[1001];
		scanf("%s", number);
		int length = strlen(number);
		int lastDigit = number[length-1]-48;
		if (lastDigit%2){
			printf("NO\n");
		}
		else{
			long sum=0;
			for (int i = 0; i < length; ++i){
				sum+=number[i]-48;
			}
			if (sum%3==0){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
	}
	return 0;
}