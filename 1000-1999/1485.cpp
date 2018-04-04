#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){
	char word [1001];
	scanf("%s", word);
	long size = strlen(word);
	sort(word, word+size);
	printf("%s\n", word);
	return 0;
}