/*
You wish to buy video games from the famous online video game store Mist.

Usually, all games are sold at the same price,  dollars. However, they are planning to have the seasonal Halloween Sale next month in which you can buy games at a cheaper price. Specifically, the first game you buy during the sale will be sold at dollars, but every subsequent game you buy will be sold at exactly  dollars less than the cost of the previous one you bought. This will continue until the cost becomes less than or equal to  dollars, after which every game you buy will cost  dollars each.

For example, if p=20,d=3  and m=6, then the following are the costs of the first  games you buy, in order:
    20,17,14,11,8,6,6,6,6,6,6
You have  dollars in your Mist wallet. How many games can you buy during the Halloween Sale?
Sample Input 0

20 3 6 80
Sample Output 0

6
Explanation 0

We have ,p=20  and d=3,m=6 the same as in the problem statement. We also have s=80 dollars.
 We can buy  games since they cost 20+17+14+11+8+6=76  dollars. However, we cannot buy a  7th game. Thus, the answer is 6.
*/



#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the howManyGames function below.
int howManyGames(int p, int d, int m, int s) {
    // Return the number of games you can buy
    int pre=0;
    int c=0;
    while(pre<=s)
    {
        if(p<= m)
        {
            c=c+1;
            pre=pre+m;
        }
        else 
        {
            c=c+1;
            pre=pre+p;
            p=p-d;
        }
    }
    
    return c-1;

}
int main()
{
	cout<<howManyGames(16,2,1,9981);//can keep any value
}
