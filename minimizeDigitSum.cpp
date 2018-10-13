/*
You are given positive integers N and D. You may perform operations of the following two types:

add D to N, i.e. change N to N+D
change N to digitsum(N)
Here, digitsum(x) is the sum of decimal digits of x. For example, digitsum(123)=1+2+3=6, digitsum(100)=1+0+0=1, digitsum(365)=3+6+5=14.

You may perform any number of operations (including zero) in any order. 
Please find the minimum obtainable value of N and the minimum number of operations required to obtain this value.
Example Input
3
2 1
9 3
11 13
Example Output
1 9
3 2
1 4
Explanation
Example case 1: The value N=1 can be achieved by 8 successive "add" operations (changing N to 10) and one "digit-sum" operation.

Example case 2: You can prove that you cannot obtain N=1 and N=2, and you can obtain N=3. The value N=3 can be achieved by one "add" and one "digitsum" operation, changing 9 to 12 and 12 to 3.

Example case 3: N=1 can be achieved by operations "add", "add", "digitsum", "digitsum": 11?24?37?10?1.
*/
#include<bits/stdc++.h>
using namespace std;
long digitsum(long l)
{
	int n=0;
	while(l!=0)
	{
		n=n+(l%10);
		l=l/10;
	}
	return n;
}
int main()
{
	long t;
	scanf("%ld",&t);
	while(t--)
	{
		long n,d,steps=0,steps1=0;
		scanf("%ld%ld",&n,&d);
		if(n==1)
		{
			printf("1 0\n");
			
		}
		else{
		
		long temp;
		temp=digitsum(n);
		while(temp>=10)
		{
			temp=digitsum(temp);
			
		}
		long temp1;
		n=n+d;
		temp1=digitsum(n);
		if(temp==temp1)
		{
			printf("%d %d",temp,steps);
		}
		else{
		
		steps+=1;
		steps1+=1;
		
		long innerstep=0,temp2=temp1;
		while(temp!=temp2)
		{
			
			steps1+=1;
			n=n+d;
			temp2=digitsum(n);
			
			while(temp2>=10)
			{
				temp2=digitsum(temp2);
				innerstep+=1;
			}
			
			if(temp2==1)
			{
				temp1=temp2;
				steps=steps1+innerstep;
				break;
			}
			if(temp2<temp1)
			{
				
				temp1=temp2;
				steps=steps1+innerstep;
			}
			innerstep=0;
		}
		steps+=1;
		printf("%d %d\n",temp1,steps);}}
	}
}
