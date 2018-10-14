/*
Function Description

Complete the flippingBits function in the editor below. It should return the unsigned decimal integer result.

flippingBits has the following parameter(s):

n: an integer
Sample Input 0

3
2147483647
1
0
Sample Output 0

2147483648
4294967294
4294967295
Sample Input 1

2
4
123456
Sample Output 1

4294967291
4294843839
Sample Input 2

3
0
802743475
35601423
Sample Output 2

4294967295
3492223820
4259365872
*/
#include <bits/stdc++.h>

using namespace std;

// Complete the flippingBits function below.
long long flippingBits(long n) {
  int a[32]={0},i=31;
    
    while(n>0)
    {
        a[i]=n%2;
        n=n/2;
        i--;
    }
   
    
    for(i=0;i<32;i++)
    {
        if(a[i]==0)
            a[i]=1;
        else
            a[i]=0;
    }

    long long dec=0,b=1;
    for(i=31;i>=0;i--)
    {
        cout<<b<<endl;
        dec = dec + (a[i] * b);
        cout<<"dec ="<<dec<<endl;
        b =b* 2;
    }
    cout<<"end"<<endl;
    return dec;

}
int main()
{
	long n;
	cin>>n;
	cout<<flippingBits(n);
}
