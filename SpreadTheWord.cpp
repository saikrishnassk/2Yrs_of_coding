/*
Snackdown 2019 is coming! People have started to spread the word and tell other people about the contest.

There are N people numbered 1 through N. Initially, only person 1 knows about Snackdown. On each day, everyone who already knows about Snackdown tells other people about it. For each valid i, person i can tell up to Ai people per day. People spread the information among the people who don't know about Snackdown in the ascending order of their indices; you may assume that no two people try to tell someone about Snackdown at the same moment. Each person is only allowed to start telling other people about Snackdown since the day after he/she gets to know about it (person 1 can start telling other people already on day 1). 
How many days does it take for all people to know about Snackdown?
Example Input
2
7
2 1 1 5 5 5 5
5
5 1 3 2 1
Example Output
2
1
Explanation
Example case 1: On day 1, person 1 tells people 2 and 3 about Snackdown. On day 2, the first three people know about Snackdown, so they can tell 2+1+1=4 people about it in a single day. That means the last four people get to know about Snackdown on day 2, so the total number of days is 2.

Example case 2: On each day, person 1 can tell up to 5 people about Snackdown, 
so on the first day, he simply tells all people about it and the total number of days is 1.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n;
		long a[100000];
		scanf("%ld%ld",&n,&a[0]);
		for(int i=1;i<n;i++)
		{
			long temp;
			scanf("%ld",&temp);
			a[i]=a[i-1]+temp;
		}
		long num_people_covered=a[0]+1,day=1;
		long index=a[0];
		while(num_people_covered < n )
		{
			
			num_people_covered+=a[index];
			day+=1;
			index=index+a[index];
		}
		printf("%ld\n",day);
	}
}
