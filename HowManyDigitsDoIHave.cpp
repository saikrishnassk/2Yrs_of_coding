#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,c=0;
	cin>>n;
	while(n!=0)
	{
		c=c+1;
		n=n/10;
	}
	if(c<=3){
		cout<<c<<endl;
	}
	else{
		cout<<"More than 3 digits"<<endl;
	}
}
