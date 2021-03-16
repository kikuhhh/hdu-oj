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

//005123123205077

int stairs(int n) {
	if (n == 2)
		return 1;
	if (n == 3)
		return 2;
	return stairs(n - 1) + stairs(n - 2);
}
int main() {
	int n,a;
	cin >> n;
	while (n--) {
		cin >> a;
		cout << stairs(a) << endl;
	};
}

