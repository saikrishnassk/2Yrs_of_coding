/*
Two players called p1 and p2 are playing a game with a starting number of stones. Player  always plays first, and the two players move in alternating turns. The game's rules are as follows:

In a single move, a player can remove either 2,3 ,5 or  stones from the game board.
If a player is unable to make a move, that player loses the game.
Given the starting number of stones, find and print the name of the winner. p1 is named First and p2 is named Second. Each player plays optimally, meaning they will not make a move that causes them to lose the game if a winning move exists.

For example, if n=4,p1  can make the following moves:

p1 removes 2 stones leaving 2.p2  will then remove 2 stones and win.
p1 removes 3 stones leaving 1.p2  cannot move and loses.
p1 would make the second play and win the game.
Sample Input

8
1
2
3
4
5
6
7
10
Sample Output

Second
First
First
First
First
First
Second
First
*/
#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfStones function below.
bool gameOfStones(int n) {
    if(n<2)
        return false;
    if(n>=2 && n<7)
        return true;
    else if(n==7 || n==8)
        return false;
    else{
        if(!(gameOfStones(n-5)) || !(gameOfStones(n-3)) || !(gameOfStones(n-2) ))
            return true;
        else
            return false;
        
    }


}

int main()
{
   
    int t;
    cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        bool result = gameOfStones(n);

        
        if(result)
            cout<<"First\n";
        else
            cout<<"Second\n";
    }
    return 0;
}

