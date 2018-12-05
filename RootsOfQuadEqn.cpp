/*
All submissions for this problem are available.Write a program to take the values for A, B, C of a quadratic equation A*X2+B*X+C=0 and then find all the roots of the equation. It is guaranteed that A ? 0 and that the equation has at least one real root.

x1=-b+(b2-4ac)v2a
x2=-b-(b2-4ac)v2a
Input:
First line will contain the value of A
Second line will contain the value of B
Third line will contain the value of C
Output:
Output two lines. First line contains the value of root 1 (x1) and second line contains the value of root 2 (x2). Your output will be considered to be correct if the difference between your output and the actual answer is not more than 10-6.

Constraints
-1000=A=1000
-1000=B=1000
-1000=C=1000
Sample Input:
1
-8
15
Sample Output:
5
3
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	double r1,r2;
	r1=(-b+sqrt((b*b*1.0)-(4.0*a*c)))/(2.0*a);
	r2=(-b-sqrt((b*b*1.0)-(4.0*a*c)))/(2.0*a);
	cout<<fixed<<setprecision(6)<<r1<<endl<<fixed<<setprecision(6)<<r2;
}
