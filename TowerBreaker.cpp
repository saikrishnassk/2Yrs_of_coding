/*
Two players are playing a game of Tower Breakers! The rules of the game are as follows: 

- Player 1 always moves first, and both players always play optimally. 
- Initially there are n towers, where each tower is of height m. 
- The players move in alternating turns. In each turn, a player can choose a tower of height x and reduce its height to y, where 1<=y<x and y evenly divides x. 
- If the current player is unable to make a move, they lose the game. 


Given the values of n and m, determine which player will win. If the first player wins, return 1. Otherwise, return 2.

For example, there are n=2 towers, each m=6 high. Player 1 can remove 3 pieces from a tower to leave 3 as 6%3=0. Player 1 can also remove 5 pieces leaving 1. Let Player 1 remove 3. Player 2 matches the move. Now Player 1 has only one move: remove 2 pieces leaving 1. Player 2 matches again leaving Player 1 with no move.
Sample Input

2
2 2
1 4
Sample Output

2
1*/
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the towerBreakers function below.
int towerBreakers(int n, int m) {
    if(m==1 || n%2==0)
        return 2;
    return 1;


}

int main()
{
    

    int t;
    cin >> t;
    
    for (int t_itr = 0; t_itr < t; t_itr++) {
        
        int n,m;
        cin>>n>>m;

        int result = towerBreakers(n, m);

        cout << result << "\n";
}
    return 0;
}


