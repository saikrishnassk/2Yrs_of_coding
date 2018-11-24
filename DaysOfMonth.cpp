/*
RJ is a very curious observer. On the first day of every month, he tries to figure out, for each of the seven days of the week, how many times that day occurs in the current month.

RJ got confused so badly doing this that he asks for your help! He asks several queries; in each query, he gives you the number of days in the current month and which day of the week is on the 1st of the current month.

For each query, you should tell him how many times each day of the week occurs.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains an integer W and a string S, separated by a space.
W denotes the number of days in the current month.
S is one of the strings "mon", "tues", "wed", "thurs", "fri", "sat" or "sun", denoting the day of the week on the 1st of the current month.
Output
For each query, print seven space-separated integers denoting the number of occurrences of Monday, Tuesday, Wednesday, Thursday, Friday, Saturday and Sunday.

Constraints
1 = T = 103
28 = W = 31
Subtasks
Subtask #1 (20 points): W = 28

Subtask #2 (80 points): original constraints

Example
Input:

2
28 mon
31 wed

Output:

4 4 4 4 4 4 4
4 4 5 5 5 4 4
Example
Example case 2: There are 4 Mondays, 4 Tuesdays, 5 Wednesdays, 5 Thursdays, 5 Fridays, 4 Saturdays and 4 Sundays.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		 int n,i;
		 cin>>n;
		 int a[7];
		 string str;
		 for(i=0;i<7;i++)
		 {
		 	a[i]=n/7;
		 }
		 cin>>str;
		 if(str=="mon")
		 {
		 	i=0;
		 }
		 else if(str=="tues"){
		 	i=1;
		 }
		 else if(str=="wed")
		 {
		 	i=2;
		 }
		 else if(str=="thurs")
		 {
		 	i=3;
		 }
		 else if(str=="fri")
		 {
		 	i=4;
		 }
		 else if(str=="sat")
		 {
		 	i=5;
		 }
		 else{
		 	i=6;
		 }
		 while(n%7!=0)
		 {
		 	a[i]+=1;
		 	i++;
		 	n=n-1;
		 }
		 for(int i=0;i<7;i++)
		 {
		 	cout<<a[i]<<" ";
		 }
		 cout<<endl;
	}
}
