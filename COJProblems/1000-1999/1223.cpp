#include <iostream>
#include <cstdio>
#include <string>
#include <map>

using namespace std;

int main(int argc, char const *argv[]){
	long long tCase = 1;
	int people;
	scanf("%i", &people);
	while(people){
		int total=0;
		string personas [people];
		string otro;
		map <string,string> links;
		for (int i = 0; i < people; ++i){
			cin >> personas[i] >> otro;
			links[personas[i]]=otro;
		}
		for (int i = 0; i < people; ++i){
			string compa = links[personas[i]];
			if (links[compa]==personas[i]){
				total++;
			}
		}
		printf("%lli %i\n", tCase, total);
		scanf("%i", &people);
		tCase++;
	}
	return 0;
}