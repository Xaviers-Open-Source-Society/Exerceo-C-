/* Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
How many such routes are there through a 20×20 grid?
*/
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	long long int a[21][21];
	 for (i=1;i<21;i++)
	  
	  {
	  	a[i][0]=1;  // initailizing column = 0, row = 1-20 with 1
	  	a[0][i]=1;  // initailizing column = 1-20, row = 0 with 1
	  }

     for (i=1;i<21;++i)
      for (j=1;j<21;++j)
      {
      	a[i][j] = a[i][j-1] + a[i-1][j];  
	  }
     cout<<"\n\n The number of ways in which 20*20 matrix can be traversed is : "<<a[20][20];
     return 0;
}
