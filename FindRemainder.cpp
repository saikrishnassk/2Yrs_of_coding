/*
Input
The first line contains an integer T, total number of test cases. Then follow T lines, each line contains two Integers A and B.

Output
Find remainder when A is divided by B.

Constraints
1 = T = 1000
1 = A,B = 10000
Example
Input
3 
1 2
100 200
10 40

Output
1
100
10
*/
#include <bits/stdc++.h> 

using namespace std;

int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	while (T--) {
		// Read the input a, b
		int a, b;
		scanf("%d %d", &a, &b);

		printf("%d\n",a%b);
	}

	return 0;
}
