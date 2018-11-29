
/*
While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000. 
If the quantity and price per item are input, write a program to calculate the total expenses.

Input
The first line contains an integer T, total number of test cases. Then follow T lines, each line contains integers quantity and price.

Output
Output the total expenses while purchasing items.

Constraints
1 = T = 1000
1 = quantity,price = 100000
Example
Input

3 
100 120
10 20
1200 20

Output

12000.000000
200.000000
21600.000000
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	while(t--){
		int q,p;
		float total;
		cin>>q>>p;
		total=q*p;
		if(q>1000){
			total=total*0.9;
			
		}
		printf("%.6f\n",(float)total);
	}
}