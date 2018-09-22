/*

Happy Ladybugs is a board game having the following properties:

The board is represented by a string, , of length . The  character of the string, , denotes the  cell of the board.
If  is an underscore (i.e., _), it means the  cell of the board is empty.
If  is an uppercase English alphabetic letter (ascii[A-Z]), it means the  cell contains a ladybug of color .
String  will not contain any other characters.
A ladybug is happy only when its left or right adjacent cell (i.e., ) is occupied by another ladybug having the same color.
In a single move, you can move a ladybug from its current position to any empty cell. 
Given the values of  and  for  games of Happy Ladybugs, determine if it's possible to make all the ladybugs happy. For each game, print YES on a new line if all the ladybugs can be made happy through some number of moves. Otherwise, print NO. 


As an example, . You can move the rightmost  and  to make  and all the ladybugs are happy.

Input Format

The first line contains an integer , the number of games.

The next  pairs of lines are in the following format:

The first line contains an integer , the number of cells on the board.
The second line contains a string  describing the  cells of the board.

Sample Input 0

4
7
RBY_YBR
6
X_Y__X
2
__
6
B_RRBR
Sample Output 0

YES
NO
YES
YES

*/
#include <bits/stdc++.h>

using namespace std;

// Complete the happyLadybugs function below.
string happyLadybugs(string b) {
   map<char,int> s;
    map <char, int> :: iterator itr1;
    int c=0,ch=0;char h;
    for(int i=0;i<b.length();i++ )
    {
        if(b[i]=='_')
            c=c+1;
        else
        {
            h=b[i];
        itr1=s.find(b[i]);
        int t=(itr1->second)+1;
            if(itr1->second==0)
                ch=ch+1;
        s.erase(b[i]);
        s.insert(pair <char,int> (b[i],t));
    }}
    if(c>=1)
    {
        for(itr1=s.begin();itr1!=s.end();++itr1)
        {
            if( (itr1->second)==1 )
                return "NO";
        }
        return "YES";
    }
    else if(ch==1 )
    {
    	if((s.find(h)->second >1))
    	{
    		return "YES";
		}
		else
		{
			return "NO";
		}
    	
	}
        
    else if(c==0)
    {
        h=b[0];
        for(int i=0;i<b.length();i++)
        {
            if(h!=b[i])
            {
                if(c==1)
                    return "NO";
                h=b[i];
                c=0;
                
            }
            c=c+1;
            
        }
        return "YES";
    }
    return "NO";
    
    
    


}
int main()
{
	string s;
	int t;
	cout<<"enter 1 for entering"<<endl;
	cin>>t;
	while(t==1)
	{
		cout<<"enter string "<<endl;
		cin>>s;
		cout<<happyLadybugs(s);
		cin>>t;
	}
	
}
