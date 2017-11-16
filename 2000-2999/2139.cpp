#include <cstring>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[]){
    char a[100000], b[100000];
	while(scanf("%s%s",a,b) != EOF){
		int pos=0;
		for (int i = 0; i < strlen(b) && pos<strlen(a); ++i){
			if (a[pos]==b[i]){
				pos++;
			}
		}
		if (pos==strlen(a)){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}