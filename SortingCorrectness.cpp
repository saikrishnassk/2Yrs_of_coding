/*
implementation of sorting algorithm correctness */


#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
void insertionSort(int N, int arr[]) {
    int i,j;
    int value;
    for(i=1;i<N;i++)
    {
        value=arr[i];
        j=i-1;
        while(j>=0 && value<arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=value;
    }
    for(j=0;j<N;j++)
    {
        printf("%d",arr[j]);
        printf(" ");
    }
}
int main()
{
	int n,a[10];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	insertionSort(n,a);
}
