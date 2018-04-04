#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long LL;

struct node{
	LL id;
	LL edges;
	bool visited;
	vector<int>posGoTo;
};

vector <node> nodes;

bool myFunction(node a, node b){ return (a.id<b.id);}

void addNode(LL id, LL vertex, LL to){
	node aux;
	aux.id = id;
	aux.edges = vertex;
	aux.visited=false;
	aux.posGoTo.push_back(to);
	nodes.push_back(aux);
	sort(nodes.begin(), nodes.end(), myFunction);
}

void addNode(LL id, LL vertex){
	node aux;
	aux.id = id;
	aux.edges = vertex;
	aux.visited = false;
	nodes.push_back(aux);
	sort(nodes.begin(), nodes.end(), myFunction);
}

int binarySearch(LL l, LL r, LL x){
   	if (r >= l){
    	LL mid = l + (r - l)/2;
    	if (nodes[mid].id == x){
            return mid;
    	}
        if (nodes[mid].id > x) {return binarySearch(l, mid-1, x);}
        else {return binarySearch(mid+1, r, x);}
    }
    return -1;
}

bool isTree(){
	for (int i = 0; i < nodes.size(); ++i){
		for (int j = 0; j < nodes[i].posGoTo.size(); ++j){
			int pos = binarySearch(0, nodes.size()-1, nodes[i].posGoTo[j]);
			if (nodes[pos].visited){
			 	return false;
			}
			nodes[pos].visited=true;
		}
	}
	return true;
}

int main(int argc, char const *argv[]){
	LL from, to, testCase = 1;
	scanf("%llu%llu", &from, &to);
	while(from!=-1){
		int edgesNumber=0;
		while(from!=0){
			int existF = binarySearch(0, nodes.size()-1, from); 
			if (existF==-1){
				addNode(from, 0, to);
			}
			else{
				nodes[existF].posGoTo.push_back(to);
			}
			int existT = binarySearch(0, nodes.size()-1, to);
			if (existT==-1){
				addNode(to, 1);
			}
			scanf("%llu%llu", &from, &to);
		}
		if (isTree()){
			printf("Case %llu is a tree.\n", testCase++);
		}
		else{
			printf("Case %llu is not a tree.\n", testCase++);
		}
		nodes.clear();
		scanf("%llu%llu", &from, &to);
	}
	return 0;
}