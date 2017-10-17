/*
145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.
Find the sum of all numbers which are equal to the sum of the factorial of their digits.
Note: as 1! = 1 and 2! = 2 are not sums they are not included.
*/
#include<iostream>
using namespace std;
int fact(int n)
{
	int f;
	if (n<2)
	 return 1;
	else 
	 f = n * fact (n-1);
	 return f;
	
}
int main()
{
	int i,tot_sum=0,dig_sum,facs[10],num;
	for (i=10;i<2500000;i++)     // max limit
	{   dig_sum=0;
		num=i;
		while (num>0)
		{	
			dig_sum+=fact(num % 10);
			num/=10;
		}
		if (dig_sum == i)
		 tot_sum+=dig_sum;
	}
    cout<<tot_sum;
}

