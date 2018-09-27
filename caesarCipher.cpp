/*
Julius Caesar protected his confidential information by encrypting it using a cipher. Caesar's cipher shifts each letter by a number of letters. If the shift takes you past the end of the alphabet, just rotate back to the front of the alphabet. In the case of a rotation by 3, w, x, y and z would map to z, a, b and c.

Original alphabet:      abcdefghijklmnopqrstuvwxyz
Alphabet rotated +3:    defghijklmnopqrstuvwxyzabc
Function Description

Complete the caesarCipher function in the editor below. It should return the encrypted string.

caesarCipher has the following parameter(s):

s: a string in cleartext
k: an integer, the alphabet rotation factor
Sample Input

11
middle-Outz
2
Sample Output

okffng-Qwvb
Explanation

Original alphabet:      abcdefghijklmnopqrstuvwxyz
Alphabet rotated +2:    cdefghijklmnopqrstuvwxyzab

m -> o
i -> k
d -> f
d -> f
l -> n
e -> g
-    -
O -> Q
u -> w
t -> v
z -> b
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	string s;
	cin>>s;
	string res;
	cin>>k;
    char ch;
    int n;
    for(int i=0;i<s.length();i++)
    {
        n=s[i];
        if(  n>=97 && n<=122 )
        {
            n=n+(k%26);
            if(n>122 )
                n=n-26;
            ch=n;
            res=res+ch;
            
        }
        else if(n>=65 && n<=90)
        {
        	n=n+(k%26);
        	if(n>90)
        	{
        		n=n-26;
        		
			}
			ch=n;
			res=res+ch;
		}
    }
    cout<<res;
}
