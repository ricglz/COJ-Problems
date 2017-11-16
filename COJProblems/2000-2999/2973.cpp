#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, zeros;

int addDigit(int num, int digit) {
  return num * 10 + digit;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	while (cin >> n && n) {
    	zeros = 0;
	    int num1 = 0, num2 = 0;
    	priority_queue <int, vector <int>, greater <int> > q;
 	   for (int i = 0; i < n; i++) {
    	  int xi; cin >> xi;
	      if (xi) q.push(xi); 
    	  else zeros++;
    	}
    num1 = addDigit(num1, q.top()); q.pop();
    num2 = addDigit(num2, q.top()); q.pop();
    int side = 1;
    for (int i = 0; i < zeros; i++) {
      if (side) num1 = addDigit(num1, 0);
      else num2 = addDigit(num2, 0);
      side = 1 - side;
    }
    while (!q.empty()) {
      if (side) num1 = addDigit(num1, q.top());
      else num2 = addDigit(num2, q.top());
      q.pop();
      side = 1 - side;
    }
    cout << num1 + num2 << endl;
  }
  return 0;
}