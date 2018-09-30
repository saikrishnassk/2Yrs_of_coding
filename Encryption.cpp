#include<bits/stdc++.h>
using namespace std;
string encryption(string s) {
int len=0;
    string res,result;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {len=len+1;
            res=res+s[i];
        }
        
    }
    float f=sqrt(len);
    int l=f;
    int fl=l,ce;
    if(f>l)
        ce=l+1;
    else
        ce=l;
    
    if(ce*fl < res.length())
    {
        fl=fl+1;
    }
    int count=0;
    for(int i=0;i<ce;i++)
    {
        for(int j=0;j<fl;j++)
        {
            if(!(i+j+(j*(ce-1))>=res.length()))
            {
            
            result=result+res[i+j+(j*(ce-1)) ];
        }
        }    if(i!= ce-1)
        {
        
        result=result+' ';
    }
    }
    return result;
    


}
int main()
{
	string s;
	getline(cin,s);
	cout<<encryption(s);
	
}
