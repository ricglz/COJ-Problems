#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct problem{
	int points;
	int duration;
	double ratio;
	bool operator() (problem i, problem j){ return (i.ratio > j.ratio); }
	int repetitions(int minutes){return minutes/duration; }
};

int main(int argc, char const *argv[]){
	int testCases;
	scanf("%u", &testCases);
	while(testCases--){
		int minutes, problemsQ;
		scanf("%u%u", &minutes, &problemsQ);
		vector <problem> problems;
		for (int i = 0; i < problemsQ; ++i){
			problem probAux;
			scanf("%u%u", &probAux.points, &probAux.duration);
			probAux.ratio = 1.0*probAux.points/probAux.duration;
			problems.push_back(probAux);
		}
		sort(problems.begin(), problems.end(), problem());
		long ans=0;
		for (int i = 0; i < problems.size(); ++i){
			if (minutes>problems[i].duration){
				int repetitions = problems[i].repetitions(minutes);
				ans += problems[i].points*repetitions;
				minutes -= problems[i].duration*repetitions;
			}
		}
		printf("%lu\n", ans);
	}
	return 0;
}