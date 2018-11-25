/*
Chef is a very experienced and well-known cook. He has participated in many cooking competitions in the past — so many that he does not even remember them all.

One of these competitions lasted for a certain number of days. The first day of the competition was day $S$ of the week (i.e. Monday, Tuesday etc.) and the last day was day $E$ of the week. Chef remembers that the duration of the competition (the number of days between the first and last day, inclusive) was between $L$ days and $R$ days inclusive. Is it possible to uniquely determine the exact duration of the competition? If so, what is this duration?

Input
The first line of the input contains a single integer $T$ denoting the number of test cases. The description of $T$ test cases follows.
The first and only line of each test case contains two space-separated strings $S$ and $E$, followed by a space and two space-separated integers $L$ and $R$.
Output
For each test case, print a single line containing:

the string "impossible" if there is no duration consistent with all given information
the string "many" if there is more than one possible duration
one integer — the duration of the competition, if its duration is unique
Constraints
$1 \le T \le 10,000$
$1 \le L \le R \le 100$
$S$ is one of the strings "saturday", "sunday", "monday", "tuesday", "wednesday", "thursday" or "friday"
$E$ is one of the strings "saturday", "sunday", "monday", "tuesday", "wednesday", "thursday" or "friday"
Subtasks
Subtask #1 (100 points): original constraints

Example Input
3
saturday sunday 2 4
monday wednesday 1 20
saturday sunday 3 5
Example Output
2
many
impossible
*/
#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       string s,e;
       cin>>s>>e;
       int l,r,a,b;
       cin>>l>>r;
       if(s=="monday"){
           a=1;
       }
       else if(s=="tuesday"){
           a=2;
       }
       else if(s=="wednesday"){
           a=3;
       }
       else if(s=="thursday"){
           a=4;
       }
       else if(s=="friday"){
           a=5;
       }
       else if(s=="saturday")
       {
           a=6;
       }
       else{
           a=7;
       }
       if(e=="monday"){
           b=1;
       }
       else if(e=="tuesday"){
           b=2;
       }
       else if(e=="wednesday"){
           b=3;
       }
       else if(e=="thursday"){
           b=4;
       }
       else if(e=="friday"){
           b=5;
       }
       else if(e=="saturday")
       {
           b=6;
       }
       else{
           b=7;
       }
       int c;
       c=b-a+1;
       if(c<=0){
           c=c+7;
       }
       /*if(c>=l )
       {
           if(c+7<=r){
               cout<<"many\n";
           }
           else{
               cout<<c<<endl;
           }
       }
       else{
           
           if(c+7<=r)
           {
               if(c+14<=r)
               {
                   cout<<"many\n";
               }
               else{
                   cout<<c+7<<endl;
               }
           }
           else{
               cout<<"impossible\n";
           }
       }*/
       int total=0,value=c;
       for(int i=c;i<=100;i+=7)
       {
           if(i>=l && i<=r){
               total++;
               value=i;
           }
       }
       if(total>1)
        {
        cout<<"many\n";
            continue;
        }
        if(total==1)
        {
            cout<<value<<"\n";
            continue;
        }

        cout<<"impossible\n";
        continue;
       
   }
   
   return 0;
}
