/*
Lena is preparing for an important coding competition that is preceded by a number of sequential preliminary contests. She believes in "saving luck", and wants to check her theory. Each contest is described by two integers, l[i] and t[i]:

l[i] is the amount of luck associated with a contest. If Lena wins the contest, her luck balance will decrease by l[i]; if she loses it, her luck balance will increase by l[i].
t[i] denotes the contest's importance rating. It's equal to 1 if the contest is important, and it's equal to 0 if it's unimportant.
If Lena loses no more than  important contests, what is the maximum amount of luck she can have after competing in all the preliminary contests? This value may be negative.

For example,k=2  and:

Contest		L[i]	T[i]
1		5	1
2		1	1
3		4	0
If Lena loses all of the contests, her will be 5+4+1=10. Since she is allowed to lose 2 important contests, and there are only 2 important contests. She can lose all three contests to maximize her luck at 10. If k=1, she has to win at least 1 of the 2 important contests. 
She would choose to win the lowest value important contest worth 1. Her final luck will be 5+4-1=8.
Function Description

Complete the luckBalance function in the editor below. It should return an integer that represents the maximum luck balance achievable.

luckBalance has the following parameter(s):

k: the number of important contests Lena can lose
contests: a 2D array of integers where each contests[i] contains two integers that represent the luck balance and importance of the i th contest.
Sample Input

6 3
5 1
2 1
1 1
8 1
10 0
5 0
Sample Output

29

*/
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the luckBalance function below.
int luckBalance(int k,int contests[10][2],int n) {
    int k1=0,c=0;
    for(int i=0;i<n;i++)
    {c=c+contests[i][0];
    if(contests[i][1]==1)
            k1=k1+1;
    
    }
    if(k1==k)
        return c;
    else{
        int k2=0;
        vector<int> res(k1);
        for(int i=0;i<n;i++)
        {
            if(contests[i][1]==1)
                res[k2++]=contests[i][0];
        }
        for(int i=0;i<k1;i++)
        {
            for(int j=0;j<(k1-1);j++)
            {
                if(res[j]>res[j+1])
                {
                    int temp=res[j];
                    res[j]=res[j+1];
                    res[j+1]=temp;
                }
            }
        }
        k2=k1-k;
        n=0;
        for(int i=0;i<k2;i++)
           n=n+res[i];
        return c-(2*n);
        
    }


}
int main()
{
	int k,c[10][2],n;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>c[i][j];
		}
	}
	cout<<luckBalance(k,c,n);
	
}
