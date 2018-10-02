/*
Alice has a binary string. She thinks a binary string is beautiful if and only if it doesn't contain the substring "010".

In one step, Alice can change a 0 to a 1 or vice versa. Count and print the minimum number of steps needed to make Alice see the string as beautiful.

For example, if Alice's string is b="010" she can change any one element and have a beautiful string.

Function Description

Complete the beautifulBinaryString function in the editor below. It should return an integer representing the minimum moves required.

beautifulBinaryString has the following parameter(s):

b: a string of binary digits
Sample Input 0

7
0101010
Sample Output 0

2  
Sample Input 1

5
01100
Sample Output 1

0
Sample Input 2

10
0100101010
Sample Output 2

3
*/
#include <bits/stdc++.h>

using namespace std;

// Complete the beautifulBinaryString function below.
int beautifulBinaryString(string b) {
    int c=0;
    for(int i=0;i<b.length()-2;i++)
    {
        if(b[i]=='0'&&b[i+1]=='1'&&b[i+2]=='0')
        {
            i=i+2;
            c=c+1;
        }
        
    }
    return c;


}
int main(){
  string s;
  cout<<"enter a binary input "<<endl;
  cin>>s;
  cout<<beautifulBinaryString(s);
}
