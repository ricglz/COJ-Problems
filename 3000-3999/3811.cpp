#include <cstdio>
//#include <map>

//using namespace std;

int main(int argc, char const *argv[]){
	int n, x;
	scanf("%u%u", &n, &x);
	int num[1024];
	int howMany[1025]={0};
	for (int i = 0; i < n; ++i){
		scanf("%u", &num[i]);
		howMany[num[i]]++;
	}
	bool encontrado = false;
	for (int i = 0; i < n; ++i){
		howMany[num[i]]--;
		Break: if(encontrado) break;
		for (int j = i+1; j < n; ++j){
			howMany[num[j]]--;
			if (howMany[num[i]^num[j]^x]){
				encontrado=true;
				goto Break;
			}
			howMany[num[j]]++;
		}
		howMany[num[i]]++;
	}
	if (encontrado){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}