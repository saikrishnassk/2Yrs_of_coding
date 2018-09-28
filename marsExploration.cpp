/*
Letters in some of the SOS messages are altered by cosmic radiation during transmission. Given the signal received by Earth as a string s, , determine how many letters of Sami's SOS have been changed by radiation.

For example, Earth receives SOSTOT. Sami's original message was SOSSOS. Two of the message characters were changed in transit.
 
Function Description

Complete the marsExploration function in the editor below. It should return an integer representing the number of letters changed during transmission.

marsExploration has the following parameter(s):

s: the string as received on Earth

Sample Input 0

SOSSPSSQSSOR
Sample Output 0

3
Explanation 0

 = SOSSPSSQSSOR, and signal length |s|=12. Sami sent 4 SOS messages (i.e.:12/3=4 ).

Expected signal: SOSSOSSOSSOS
Recieved signal: SOSSPSSQSSOR
Difference:          X  X   X
We print the number of changed letters.

Sample Input 1

SOSSOT
Sample Output 1

1
Explanation 1

s = SOSSOT, and signal length |s|=6. Sami sent 2 SOS messages (i.e.:6/3=2 ).

Expected Signal: SOSSOS     
Received Signal: SOSSOT
Difference:           X
We print the number of changed letters, which is 1.

Sample Input 2

SOSSOSSOS
Sample Output 2

0
Explanation 2

Since no character is altered, we print 0.
*/


#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
    int sa,c=0;
    for(int i=0;i<s.length();i++)
    {
        sa=i%3;
        if(sa==0 && s[i] != 'S')
            c=c+1;
        else if(sa==1 && s[i]!='O')
            c=c+1;
        else if(sa==2 && s[i]!='S')
            c=c+1;
        
    }
    return c;


}
int main()
{
	string s;
	cin>>s;
	cout<<marsExploration(s)<<endl;
	
}







