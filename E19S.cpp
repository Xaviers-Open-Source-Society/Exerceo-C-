/*You are given the following information, but you may prefer to do some research for yourself.

1 Jan 1900 was a Monday.
Thirty days has September,
April, June and November.
All the rest have thirty-one,
Saving February alone,
Which has twenty-eight, rain or shine.
And on leap years, twenty-nine.
A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?
*/
#include<iostream>
using namespace std;
int week_day=3;
int sunday_count_fn(int days)
{
	int week[8],i,counter=0;
	for (i=1;i<=days;i++)
	{
		week[week_day]=i;
		week_day++;
        if (week_day==8)
         week_day=1;
        if (week[1]==1)         // week[1] is sunday
         counter=1;
	}
  return counter;
}
int leap_check(int year)
{
	if (year%4==0)
	{
		if (year%100==0 && year%400==0)
		 return 1;
		if (year%100==0 && year%400!=0)
		 return 0;
		else
		 return 1;
		
	}
}
int main()
{
	int year,month,days,leap=0,sunday_count=0;
	 for (year=1901;year<=2000;year++)
	 {  leap=leap_check(year);
	 	for (month=1;month<=12;month++)
	 	 {
	 	 	if (month==2 && leap==1)
	 	 	 days=29;
	 	 	if (month==2 && leap==0)
	 	 	 days=28;
	 	 	if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)  // Days stores the number of days of month.
	 	 	 days=31;
	 	 	if (month==4 || month==6 || month==9 || month==11 )
	 	 	 days=30;
	 	 	
		    sunday_count = sunday_count + sunday_count_fn(days);
		    
		  }
	 }

    
    cout<<"\n\n Sunday count is : "<<sunday_count;
}

