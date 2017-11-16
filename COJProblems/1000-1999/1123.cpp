#include <cstdio>
#include <vector>

using namespace std;

vector<long> arr;

long min(long a, long b, long c){
	if (a<=b){
		if (a<=c){
			return a;
		}
		else{
			return c;
		}
	}
	else{
		if (b<=c){
			return b;
		}
		else{
			return c;
		}
	}
}

void llenar(){

	arr.push_back(1);
	int pos2, pos3, pos5;
	pos2=pos3=pos5=0;
	while(arr.size()<1500){
		long val = min(arr[pos2]*2, arr[pos3]*3, arr[pos5]*5);
		if (val==arr[pos2]*2){
			pos2++;
		}
		if (val==arr[pos3]*3){
			pos3++;
		}
		if (val==arr[pos5]*5){
			pos5++;
		}
		arr.push_back(val);
	}
}

int main(int argc, char const *argv[]){
	llenar();
	int num;
	scanf("%i", &num);
	while(num){
		printf("%li\n", arr[num-1]);
		scanf("%i", &num);
	}
	return 0;
}