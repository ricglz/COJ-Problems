#include <cstdio>
#include <vector>

using namespace std;

int notEmptyRooms;
vector <int> onePeople;

void change(vector <int> &rooms, int people, int n){
	if (notEmptyRooms){
		if (people==1){
			rooms[n-notEmptyRooms]++;
			people--;
			onePeople.push_back(n-notEmptyRooms);
			notEmptyRooms--;
		}
		else{
			rooms[n-notEmptyRooms] += 2;
			people-=2;
			notEmptyRooms--;
			if (people){
				change(rooms, people, n);
			}
		}
	}
	else{
		rooms[onePeople[0]]++;
		people--;
		onePeople.erase(onePeople.begin());
		if (people){
			change(rooms, people, n);
		}
	}
}

int main(int argc, char const *argv[]){
	int n=0, g;
	scanf("%u%u", &n, &g);
	vector <int> rooms(n,0);
	notEmptyRooms = n;
	while(g--){
		int people;
		scanf("%u", &people);
		change(rooms, people, n);
	}
	for (int i = 0; i < n; ++i){
		printf("%u\n", rooms[i]);
	}
	return 0;
}