#include <cstdio>
#include <cstring>

int toInt(char num){
	int n=num-48;
	return n;
}

int factorial(int n){
	int res=1;
	while(n>1){
		res*=n--;
		//n--;
	}
	return res;
}

int main(int argc, char const *argv[]){
	char numbers [6];
	scanf("%s", numbers);
	while(numbers[0]!='0'){
		int ans=0, length = strlen(numbers);
		for (int i = 0; i < length; ++i){
			ans+=factorial(length-i)*toInt(numbers[i]);
		}
		printf("%i\n", ans);
		scanf("%s", numbers);
	}
	return 0;
}