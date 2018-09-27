#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int v,c[4]={0};
    for(int i=0;i<n;i++)
    {
        v=password[i];
        if(v>=48 && v<=57)
            c[0]+=1;
        else if(v>=97 && v<=122)
            c[1]+=1;
        else if(v>=65 && v<=90)
            c[2]+=1;
        else if(v==33 || (v>=35 && v<=38) || (v>=40 && v<=43) || v==45 || v==64|| v==94 )
            c[3]+=1;
    }
    v=0;
    if(c[0]==0)
        v=v+1;
    if(c[1]==0)
        v=v+1;
    if(c[2]==0)
        v=v+1;
    if(c[3]==0)
        v=v+1;
    if(n>=6 || n+v >=6)
        return v;
    return 6-n;

}
int main()
{
	string s;
	cin>>s;
	cout<<minimumNumber(s.length(),s);
}
