/*
You are a poor person in ChocoLand. Here, people eat chocolates daily instead of normal food. There is only one shop near your home; this shop is closed on Sunday, but open on all other days of the week. You may buy at most one box of N chocolates from this shop on each day when it is open.

Currently, it's Monday, and you need to survive for the next S days (including the current day). You have to eat K chocolates everyday (including the current day) to survive. Do note that you are allowed to buy the a chocolate box and eat from it on the same day.

Compute the minimum number of days on which you need to buy from the shop so that you can survive the next S days, or determine that it isn't possible to survive.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains 3 integers N, K and S denoting the number of chocolates in a box, the number of chocolates you have to eat everyday to survive and the number of days you need to survive.
Output
For each test case, print a single line containing one integer — the minimum number of days on which you need to buy from the shop to survive, or -1 if you will not be able to survive S days.
Example
Input:
2
16 2 10
50 48 7

Output:
2
-1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int j=0,n,k,s,c=0,n1;
		cin>>n>>k>>s;
		n1=n;
		/*while(n<(k*s)){
			c=c+1;
			n=n+n1;
			
		}*/
		for(int i=1;i<=s;i++){
			if(i%7!=0){
				n=(j*n)+n1;
				c=c+1;
					if(n>=(k*s)){
					
					break;
				}
				
				j=1;
			
			}
		}
		if(n>=(k*s)){
		
		 cout<<c<<endl;
	}
	
	else{
		c=-1;
		cout<<c<<endl;
	}
	}
}
