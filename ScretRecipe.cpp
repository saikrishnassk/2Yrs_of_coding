#include<bits/stdc++.h>
using namespace std;
int main()
{
	float t,x1,x2,x3,v1,v2;
	float t1,t2;
	cin>>t;
	while(t--)
	{
		cin>>x1>>x2>>x3>>v1>>v2;
		t1=(x3-x1)/v1;
		t2=(x2-x3)/v2;
		cout<<t1<<" "<<t2<<endl;
		if(t1<t2){
			cout<<"Chef\n";
		}
		else if(t2<t1){
			cout<<"Kefa\n";
		}
		else{
			cout<<"Draw\n";
		}
	}
	return 0;
}
