/*
This is an interactive problem.

Chef likes probability puzzles a lot, almost as much as interactive problems. Today, he learned about the Monty Hall Paradox.

Suppose that Chef is participating in a game show, where he has to choose between three doors numbered 1 through 3. There is a car behind one of the doors and goats behind the other two. Chef does not know what is behind which door, but there is a game host who knows where the car is.

First, you need to help Chef pick a door (let's denote it by X). Then, the host opens a different door (let's denote it by Y) such that there is a goat behind this door, and asks Chef to pick an arbitrary door again (let's denote it by Z). You need to help Chef pick door Z too. You should do it in such a way that the probability of a car being behind door Z is maximised. If there are multiple optimal possible ways to pick doors for Chef, you may choose any one.

Interaction
First, you should print a line containing a single integer X (1=X=3).
Then, you should read a line containing a single integer Y.
Finally, you should print a line containing a single integer Z (1=Z=3).
Don't forget to flush the output after printing each line!

Constraints
1=Y=3
X?Y
Subtasks
Subtask #1 (100 points): original constraints

Example
You                     Grader
3
                        1
2
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<1<<endl<<flush;
	int t;
	cin>>t;
	if(t==2){
		cout<<3<<endl<<flush;
	}
	else{
		cout<<2<<endl<<flush;
	}
}