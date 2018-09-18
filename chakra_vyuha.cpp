#include<iostream>
using namespace std;
int main()
{
	int a[40][40],n,i,j,k,r,c,s=0;
	
	while(s!=1)
	{cout<<"enter N"<<endl;
	cin>>n;
	int t=n;
	k=1;
	r=0;
	c=0;
	
	
	for(i=1;i<=(2*n-1);i++)
	{
		if(i%4==1)
		{
			for(j=c;j<(t+c);j++)
			{
				a[r][j]=k;
				k++;
				if(k==n*n+1)
				{break;
				}
			}
			c=j-1;
			t=t-1;
		}
		else if(i%4==2)
		{
			for(j=r;j<(t+r);j++)
			{
				a[j+1][c]=k;
				k++;
				if(k==n*n+1)
				{break;
				}
			}
			r=r+t;
			
		}
		else if(i%4==3)
		{int cc=0;
			
			j=c-1;
			while(j>=0 && cc!=t)
			{
				a[r][j]=k;
				k++;
				if(k==n*n+1)
				{break;
				}
				j=j-1;
				cc=cc+1;
			}
			
			
			c=j+1;
			t=t-1;
		}
		else if(i%4==0)
		{int cc=0;
			
			j=r-1;
			while(cc!=t && j>0)
			{
				a[j][c]=k;
				k++;
				cc=cc+1;
				j=j-1;
			}
			r=j+1;
			c=c+1;
		}
		else
		{
			cout<<"canot prepare"<<endl;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",a[i][j]);
		}
		cout<<endl;
	}
   cout<<"enter 1 for exit"<<endl;
   cin>>s;
   }
 } 
