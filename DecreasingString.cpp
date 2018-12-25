/*
You need to find a string which has exactly K positions in it such that the character at that position comes alphabetically later than the character immediately after it. If there are many such strings, print the one which has the shortest length. If there is still a tie, print the string which comes the lexicographically earliest (would occur earlier in a dictionary).

Input
The first line contains the number of test cases T. Each test case contains an integer K (= 100).

Output
Output T lines, one for each test case, containing the required string. Use only lower-case letters a-z.

Sample Input
2
1
2
Sample Output
ba
cba

*/
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >>t;
	for(int u=0 ;u<t; u++){
		int n;
		cin >>n;
		string temp="zyxwvutsrqponmlkjihgfedcba";
		char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
		string s="";
		int r=n%25;
		for(int i=r; i>=0 && r!=0 ;i--){
			s=s+a[i];
		}
		int k=n/25;
		for(int i=0 ;i<k ;i++){
			s=s+temp;
		}
		cout << s << endl;
	}
}
