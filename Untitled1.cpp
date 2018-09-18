#include <bits/stdc++.h>

using namespace std;

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {
    for(long i=p;i<=q;i++)
    {
        int len=0,r,l,div=1;
        long long n=i*i;
        while(n!=0)
        {
            len=len+1;
            n=n/10;
        }
        n=i*i;
        cout<<n<<endl<<len<<endl;
        if(len%2==0)
        {
            len=len/2;
            while(len!=0)
            {
                div=div*10;
                len=len-1;
            }
            r=n%div;
            l=n/div;
            if(i == r+l)
            {
                cout<<i<<" ";
            }
        }
        else
        {
            int ri,le,div1=1,div2=1;
            le=(len+1)/2;
            ri=len-le;
            while(le!=0)
            {
                div1=div1*10;
                le=le-1;
            }
            l=n/div1;
            
            r=n%div1;
            if(i==r+l)
            {
                cout<<i<<" ";
            }
        }
    }


}

int main()
{
    int p;
    cin >> p;

    int q;
    cin >> q;

    kaprekarNumbers(p, q);

    return 0;
}

