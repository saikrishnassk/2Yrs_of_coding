/*
Sherlock Holmes suspects his archenemy Professor Moriarty is once again plotting something diabolical. Sherlock's companion, Dr. Watson, suggests Moriarty may be responsible for MI6's recent issues with their supercomputer, The Beast.

Shortly after resolving to investigate, Sherlock receives a note from Moriarty boasting about infecting The Beast with a virus. He also gives him a clue: an integer. Sherlock determines the key to removing the virus is to find the largest Decent Number having that number of digits.

A Decent Number has the following properties:

Its digits can only be 3's and/or 5's.
The number of 3's it contains is divisible by 5.
The number of 5's it contains is divisible by 3.
It is the largest such number for its length.
Moriarty's virus shows a clock counting down to The Beast's destruction, and time is running out fast. Your task is to help Sherlock find the key before The Beast is destroyed!

For example, the numbers 55533333 and 555555 are both decent numbers because there are 3 5's and 5 3's in the first, and 6 5's in the second. They are the largest values for those length numbers that have proper divisibility of digit occurrences.

Function Description

Complete the decentNumber function in the editor below. It should print the decent number for the given length, or -1 if a decent number of that length cannot be formed.

decentNumber has the following parameter(s):

n: the integer length of the decent number to create
Sample Input

4
1
3
5
11
Sample Output

-1
555
33333
55555533333
*/

#include<bits/stdc++.h>
using namespace std;
// Complete the decentNumber function below.
void decentNumber(int n) {
    int a=0,b=0,c=0;
   if(n==1  || n==2)
   {
       cout<<"-1";
       c=1;
   }
        
    else if(n%3==0)
    {
        for(int i=0;i<n;i++)
            cout<<"5";
        c=1;
    }
    else if(n%3!=0 )
    {
        
        for(int i=1;i<=n;i++)
        {
            
                if(i%3==0 && i>a && (n-i)%5==0 )
                {
                    a=i;
                    b=n-i;
                }
           
            
        }
        for(int i=0;i<a;i++)
            cout<<"5";
        for(int i=0;i<b;i++)
            cout<<"3";
        if(a!=0 && b!=0)
            c=1;
    }
    
    if(a==0 && b==0 && c==0 )
    {
    	if(n%5==0)
    	{
		
        for(int i=0;i<n;i++)
            cout<<"3";
    }
    else
    {
    	cout<<"-1";
	}
	}

}
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
	int n;
	cin>>n;
	decentNumber(n);
	cout<<endl;
	}	
}
