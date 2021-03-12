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

//2
//5 6 - 1 5 4 - 7
//7 0 6 - 1 1 - 6 7 - 5



int main() {
	string m, n;
	int t;
	cin >> t;
	int k = 1;
	while (cin >> m >> n) {
		t--;
		cout << "Case " << k << ":" << endl;
		cout << m << " + " << n << " = ";
		int size = m.size() > n.size() ? m.size() : n.size();
		if (m.size() < size) {
			m.insert(0, size - m.size(), '0');
		}
		else {
			n.insert(0, size - n.size(), '0');
		}
		int jinwei = 0;

		for (int i = size - 1; i >= 0; --i) {
			m[i] += n[i] - '0' + jinwei;
			jinwei = 0;
			if (m[i] > '9') {
				m[i] -= 10;
				jinwei = 1;
			}
		}
		

		if (jinwei == 1)
			cout << jinwei;
		cout << m << endl;
		if (t != 0)
			cout << endl;
		k++;
	}
}
