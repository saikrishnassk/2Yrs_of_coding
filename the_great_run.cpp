#include <stdio.h>
int main() {
	// your code goes here
	int t,temp=0,k,n,a[30],lg=0,i,j,s;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    
	    scanf("%d%d",&n,&k);
	    for(j=0;j<n;j++)
	    {
	        
	        scanf("%d",&a[j]);
	        
	    }
	    for(j=0;j<(n-1);j++)
	    {
	        for(s=j;s<(j+k);s++)
	        {
	            temp+=a[s];
	            
	        }
	        if(temp>lg)
	        {
	            lg=temp;
	        }
	        temp=0;
	    }
	    printf("%d",lg);
	}
	return 0;
}

