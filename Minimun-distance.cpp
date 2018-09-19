/*We define the distance between two array values as the number of indices between the two values. Given , find the minimum distance between any pair of equal elements in the array. If no such value exists, print -1.
Sample Input

6
7 1 3 4 1 7
Sample Output

3
Explanation 
Here, we have two options:

a[1] and a[4] are both 1, so d[1,4]=|1-4|=3.
a[0] and a[5] are both 7, so d[0,5]=|0-5|=5.
The answer is min(3,5)=3.*/
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the minimumDistances function below.
int minimumDistances(vector<int> a) {
    int min=1000000;
    for(int i=0;i<a.size();i++)
    {
        for(int j=i+1;j<a.size();j++)
        {
            if(a[i]==a[j] && min> (j-i))
            {
                
                    min=j-i;
            }
        }
    }
    if(min==1000000)
        return -1;
    return min;


}
