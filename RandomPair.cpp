#include <bits/stdc++.h>
using namespace std;
#define int long long int
main() {
    int t,n,count;
    long double ans,max;
    cin>>t;
    while(t--)
    { 
        cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)
        {   
            cin>>a[i];
        }
        
        sort(a,a+n);
        count=0;
    
        for(int i=n-1;i>0;i--)
        {
            if(a[i]!=a[n-1]) break;
            for(int j=i-1;j>=0;j--)
            {
                if((a[j]==a[n-2]))
                count++;
                else break;
            }
        }
        max=((n)*(n-1))/(2);
        ans=((float)(count))/(max);
        
        cout<<fixed<<setprecision(8)<<ans<<endl;
    }
	
	return 0;
}

