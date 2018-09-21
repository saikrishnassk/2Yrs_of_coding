/*
Flatland is a country with a number of cities, some of which have space stations. Cities are numbered consecutively and each has a road of 1KM length connecting it to the next city. It is not a circular route, so the first city doesn't connect with the last city. Determine the maximum distance from any city to it's nearest space station.

For example, there are n=3 cities and m=1 of them has a space station , city 1. They occur consecutively along a route. City 2 is 2-1=1 unit away and city 3 is 3-1=2 units away. City 1 is 0 units from its nearest space station as one is located there. The maximum distance is 2.

Function Description

Complete the flatlandSpaceStations function in the editor below. It should return an integer that represents the maximum distance any city is from a space station.

flatlandSpaceStations has the following parameter(s):

n: the number of cities
c: an integer array that contains the indices of cities with a space station, 1-based indexing
Input Format

The first line consists of two space-separated integers,  and . 
The second line contains  space-separated integers, the indices of each city having a space-station. These values are unordered and unique.
Sample Input 0

5 2
0 4
Sample Output 0

2
*/

#include <bits/stdc++.h>

using namespace std;


// Complete the flatlandSpaceStations function below.
int flatlandSpaceStations(int n, vector<int> c) {
    int temp=0,min=100000,max=0;
    for(int i=0;i<n;i++)
    {
        min=100000;
        for(int j=0;j<c.size();j++)
        {
            temp=c[j]-i;
            if(temp<0)
                temp=-temp;
            if(min>temp)
                min=temp;
            
            
        }
        if(max<min)
            max=min;
    }
    return max;


}

int main()
{
	int n=5,m=2;
	vector<int> c(m);
	for(int i=0;i<m;i++)
	{
		cin>>c[i];
	}
	cout<<flatlandSpaceStations(n,c);
	
}
