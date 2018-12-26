/*
The Petrozavodsk camp takes place in about one month. Jafar wants to participate in the camp, but guess what? His coach is Yalalovichik.

Yalalovichik is a legendary coach, famous in the history of competitive programming. However, he is only willing to send to the camp students who solve really hard problems on Timus. He started a marathon at the beginning of December. Initially, he said that people who solve 200 or more problems by the 31-st of December may go to the camp. Jafar made a schedule for the next month. For each day, he knows how many problems he is going to solve.

The problem is that Yalalovichik is a really moody coach � he may wake up tomorrow and change his decision about the deadline and the number of problems that must be solved by this deadline to qualify for the camp. Jafar has Q such scenarios. Now he wants to know: in each scenario, if he does not change his problem solving schedule, will he go to the camp or not?

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer D - the number of days in Jafar's schedule.
D lines follow. For each i (1=i=D), the i-th of these lines contains two space-separated integers di and pi denoting that Jafar will solve pi problems on day di.
The next line contains a single integer Q denoting the number of scenarios Jafar considers.
Q lines follow. For each i (1=i=Q), the i-th of these lines contains two space-separated integers deadi and reqi denoting a scenario where Yalaovichik decides that students who solve reqi problems by day deadi (inclusive) will go to the camp.
Output
For each scenario, print a single line containing the string "Go Camp" if Jafar is going to the camp or "Go Sleep" otherwise (without quotes).

Constraints
1=T=100
1=D=31
1=di=31 for each valid i
1=pi=100 for each valid i
d1,d2,�,dD are pairwise distinct
1=Q=100
1=deadi=31 for each valid i
1=reqi=5,000 for each valid i
Example Input
1
3
10 5
14 4
31 1
2
9 2
15 7
Example Output
Go Sleep
Go Camp
Explanation
Example case 1:

By the end of day 9, Jafar will not have any problem solved.
By the end of day 15, Jafar will have 9 problems solved, which is enough to go to the camp, since he needs at least 7 problems.
*/
#include<bits/stdc++.h>
using namespace std;


	int main()
{
	int t,D;
	int dead, req;
		
			int q;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{cin>>D;
	
int d[D],s[D];
	int sum=0;
	for(int j=0;j<D;++j)
	{
		cin>>d[j];
		cin>>s[j];
		sum=sum+s[j];
		s[j]=sum;
	}



		cin>>q;
		for(int k=0;k<q;++k)
		{int m=0;
			cin>>dead>>req;
		while(m<D)
			{
				if(dead<d[m])
				{cout<<"Go Sleep\n";
				
				break;
				
			    }
			    if(dead==d[m]&&req>s[m])
			{
	         	cout<<"Go Sleep\n";	
			break;}
			
			if(dead>=d[m]&&req<=s[m])
			{
	         	cout<<"Go Camp\n";	
			break;}
			
		    if(m+1==D)
				{
					cout<<"Go Sleep\n";	
					break;
				}
				
		m=m+1;	
		}
		
	}

}	return 0;
}
