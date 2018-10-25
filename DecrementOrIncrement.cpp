/*
All submissions for this problem are available.Write a program to obtain a number N and increment its value by 1 if the number is divisible by 4 otherwise decrement its value by 1.

Input:
First line will contain a number N.
Output:
Output a single line, the new value of the number.
Sample Input:
5
Sample Output:
4
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	cin>>i;
	if(i%4==0){
		cout<<i+1<<endl;
	}
	else{
		cout<<i-1<<endl;
	}
}
