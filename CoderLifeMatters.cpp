
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int ct,x;
while(t--)
{
	ct=0;
	bool bored;
	for(int i=0;i<30;i++)
	{
		cin>>x;
		if(x==1)
		{
			ct++;
		}
		else{
			ct=0;
		}
		if(ct>5){
			bored=true;
		}
	}
	if(bored){
		cout<<"#coderlifematters\n";
	}
	else{
		cout<<"#allcodersarefun\n";
	}
	
}
return 0;
}
