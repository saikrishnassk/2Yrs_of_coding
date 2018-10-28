#include"bits/stdc++.h"
using namespace std;
int main(){
	int l,b;
	cin>>l>>b;
	
	int peri=2*(l+b),area=l*b;
	if(peri>area)
	{
		cout<<"Peri\n"<<peri;
	}
	else if(area>peri){
		cout<<"Area\n"<<area;
	}
	else{
		cout<<"Eq\n"<<peri;
	}
} 
