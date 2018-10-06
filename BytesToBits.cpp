/*
n the magical land of Byteland, there are three kinds of citizens:

a Bit - 2ms after a Bit appears, it grows up and becomes a Nibble (i.e. it disappears and a Nibble appears)
a Nibble - 8ms after a Nibble appears, it grows up and becomes a Byte
a Byte - 16ms after a Byte appears, it grows up, splits into two Bits and disappears
Chef wants to know the answer to the following question: what would the population of Byteland be immediately before the time Nms if only 1 Bit appeared at time 0ms?

Help him and find the population (number of citizens) of each type.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single integer N.
Output
For each test case, print a single line containing three space-separated integers — the number of Bits, Nibbles and Bytes.
Example Input
2
2
3
Example Output
1 0 0
0 1 0
Explanation
Immediately before the time 2ms, there is only one Bit. At 2ms, this Bit grows up, so immediately before 3ms, there is only one Nibble in Byteland.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		long long t2s=1,e8s=0,s16s=0;
		cin>>n;
		while(n>1)
		{
			for(int i=0;i<3;i++)
			{
				if(n==2)
				{
					n=n-2;
				}
				if(i==0 && n>2)
				{
					e8s+=t2s;
					t2s-=t2s;
					
					n=n-2;
					
				}
				else if(i==1 && n>8)
				{
					
					s16s+=e8s;
					e8s-=e8s;
					n=n-8;
				}
				else if(i==2 && n>16)
				{
					
					t2s+=2*s16s;
					s16s-=s16s;
					n=n-16;
				}
			}
		}
		printf("%lld %lld %lld\n",t2s,e8s,s16s);
	}
}
