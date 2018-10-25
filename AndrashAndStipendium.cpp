/*
Andrash study in Uzhland National University. Now is the time of exam results. Andrash similar to other students, hopes that this scores in the exam could fetch him a scholarship/stipendium for his studies.

There are following simple rules to receive stipendium:

University follows 5 point grading system. In an exam, a student can receive any score from 2 to 5. 2 is called an F grade, meaning that student has failed that exam.
Student should not have fail any of the exams.
Student must obtain a full score in some of his/her exams to show that he/she is excellent in some of the subjects.
He/She must have a grade point average not less than 4.0
You are given information regarding the exams and how Andrash performed in those. Can you help him figure out whether he will receive the stipendium or not!!

Input
The first line of input contains a single integer T denoting the number of test cases. This will be followed by T test cases.

The first line of each test case contains an integer N denoting the number of examinations.

The next line of each test case contains N space separated integers denoting Andrash's score for each exam.

Output
For each of the T test cases, output a single line - "Yes" (without quotes) if Andrash will receive stipendium, or "No" (without quotes) - otherwise.
Example
Input:
2
5
3 5 4 4 3
5
3 4 4 4 5

Output:
No
Yes
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,a;
		long double f=0;
		int j=0,k=0;
		cin>>n;
		for(long long i=0;i<n;i++)
		{
			cin>>a;
			f=f+a;
			if(a<=2)
			{
				j=1;
			}
			if(a==5)
			{
				k=1;
			}
		}
		f=f/n;
		if(j==1 || f<4)
		{
			cout<<"No\n";
		}
		else if(k==1 && f>=4)
		{
			cout<<"Yes\n";
		}
	}
}
