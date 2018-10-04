/*
Marc loves cupcakes, but he also likes to stay fit. 
Each cupcake has a calorie count, and Marc can walk a distance to expend those calories. If Marc has eaten j cupcakes so far, after eating a cupcake with c calories he must walk at least 2^j * c miles to maintain his weight.

For example, if he eats 3 cupcakes with calorie counts in the following order:[5,10,7] , the miles he will need to walk are (2^0 *5)+(2^1*10)+(2^2*7)=5+20+28=53. This is not the minimum, though, so we need to test other orders of consumption. In this case, our minimum miles is calculated as (2^0*10)+(2^1*7)+(2^2*5)=10+14+20=44.

Given the individual calorie counts for each of the cupcakes, determine the minimum number of miles Marc must walk to maintain his weight. Note that he can eat the cupcakes in any order.

Function Description

Complete the marcsCakewalk function in the editor below. It should return a long integer that represents the minimum miles necessary.

marcsCakewalk has the following parameter(s):

calorie: an integer array that represents calorie count for each cupcake
Sample Input 0

3
1 3 2
Sample Output 0

11
Sample Input 1

4
7 4 9 6
Sample Output 1

79
*/
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the marcsCakewalk function below.
long marcsCakewalk(vector<int> calorie) {
    for(int i=0;i<calorie.size();i++)
    {
        for(int j=0;j<calorie.size()-1;j++)
        {
            if(calorie[j]<calorie[j+1])
            {
                int temp=calorie[j];
                calorie[j]=calorie[j+1];
                calorie[j+1]=temp;
                
            }
        }
    }
    long long c=0,c1=1;
    for(int i=0;i<calorie.size();i++)
    {
        c=c+(c1*calorie[i]);
        c1=c1*2;
    }
    return c;


}
int main()
{
	int n;
	cin>>n;
	vector<int>c(n);
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
		
	 } 
	 cout<<marcsCakewalk(c);
}
