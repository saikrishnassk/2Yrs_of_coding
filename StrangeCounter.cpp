/*

Bob has a strange counter. At the first second, it displays the number 3.
Each second, the number displayed by the counter decrements by 1 until it reaches 1.

The counter counts down in cycles. In next second, the timer resets to 2* the initial number for the prior cycle and continues counting down. 
For The diagram see Hacker rank Practice section StrangeCounter..
Sample Input

4
Sample Output

6
Explanation

Time t=4 marks the beginning of the second cycle. It is double the number displayed at the beginning of the first cycle: 2*3=6.
This is also shown in the diagram in the Problem Statement above.
*/
#include <bits/stdc++.h>

using namespace std;

// Complete the strangeCounter function below.
long strangeCounter(long t) {
    long c=0,a=3,b=1,time=1;int i=1;
    while(c!=1)
    {
        a=a*i;
        b=time;
        time=b+a-1;
        if(t<=time)
            c=1;
        i=2;
        time=time+1;
        
    }
    return (a-t+b);


}
int main()
{
	long t;
	cin>>t;
	cout<<strangeCounter(t)<<endl;
}
