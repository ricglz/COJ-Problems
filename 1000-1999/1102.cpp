#include <cstring>
#include <cstdio>

int main(int argc, char const *argv[]){
	char number [1001];
	scanf("%s", number);
	while(number[0]!='0'){
		long sum=0;
		int longitud=strlen(number);
		for (int i = 0; i < longitud; ++i){
			if (i%2){
				sum-=number[i]-48;
			}
			else{
				sum+=number[i]-48;
			}
		}
		printf("%s is ", number);
		if (sum%11){
			printf("not ");
		}
		printf("a multiple of 11.\n");
		scanf("%s", number);
	}
	return 0;
}