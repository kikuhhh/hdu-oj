#include <iostream>
#include <iomanip> 
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <stdio.h>
#include <set>
#include <cmath>
#include <sstream> 
using namespace std;
//
//5
//5 6 -1 5 4 -7
//7 0 6 -1 1 -6 7 -5
//4 3 -4 5 1
//5 -1 -2 -3 -4 5
//4 -1 -2 -3 -4

//Case 1:
//14 1 4
//
//Case 2 :
//7 1 6

int main() {
	int num, n;
	int t;
	int k = 1;
	cin >> num;
	while (num--) {
		cin >> t;
		cout << "Case " << k++ << ":" << endl;
		int start = 1, end = 1, max = INT_MIN, now = 0, idx = 1, now_left = start, now_end = end;

		while (t--) {
			cin >> n;
			now += n;

			if (max < now) {
				max = now;
				start = now_left;
				end = now_end;
			}

			if (now < 0) {
				now = 0;
				now_left = now_end = idx+1;
			}
			now_end = idx+1;
			idx++;
		}
		cout << max << " " << start << " " << end << endl;
		if (num != 0)
			cout << endl;
	}
}
