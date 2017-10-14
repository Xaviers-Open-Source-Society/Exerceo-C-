/*
If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?
*/
// THIS PROGRAM HAS MANUAL COUNTING FOR FEW NUMBERS AND THEN COUNTING AUTOMATICALLY FOR OTHER NUMBERS
#include<iostream>
using namespace std;
int letter_count_fn(int num)
{
	int n=num,d,d2,d3,d4; // d4 is used when we have numbers such as 411,412,518,619,etc.
	long long int counter=0;
	 	d=n%10;    // ones place
		n/=10;
		d2=n%10;   // tens place
		n/=10;
		d3=n%10;   // hundreds place
		
		if (num==20)     return 6;   // for number 20
			
	  	if (num==11 || num==12 )     // Manually checking for numbers from 11 to 19
		   return 6;
	 	if (num==13 || num==14) 
		   return 8;
	 	if (num==15 || num==16 || num==19) 	
		   return 7;
	 	if (num==17 || num==18) 
		   return 9;
		   
	    /////////////////////////
	    
	 	if (num==1000)  return 11;  // Manually for number 1000 
		
		if (num<1000 && num>=100)                                             // Numbers b/w 100 and 999(both inclusive)
	 	{  
		 
		 if ((num%100)>=11 && (num%100)<=19)
		{
			d4=num%100;  // Finds store ten's and one's digit
		
			counter=0;
		{				
	  	if (d4==11 || d4==12 ) 	 
		  	 counter+= 6;
	 	if (d4==13 || d4==14) 	 
		 	 counter+= 8;
	 	if (d4==15 || d4==16 || d4==19) 
		  	counter+= 7;
	 	if (d4==17 || d4==18) 	 
		    counter+= 9;
		
	    }
	    {
	    if (d3==1 || d3==2 || d3==6) 	 
		    counter+= 3;
	 	else if (d3==4 || d3==9 || d3==5) 	 
		    counter+= 4;
	 	else if (d3==3 || d3==7 || d3==8) 	
		    counter+= 5;
	 	counter+=10;
	    }
	 	return counter;
		}
		 
		 counter=0;                        // Block for standard numbers i.e., 121, 654,786,999,etc.
	 		if (d==1 || d==2 || d==6) 	   // d1 , one's place
			  	 counter+= 3;
	 	else if (d==4 || d==9 || d==5) 	
		     	 counter+= 4;
	 	else if (d==3 || d==7 || d==8) 
		 	 	 counter+= 5;
	 	
	 	if (d2==3 || d2==2 || d2==4 || d2==8)  // d2 ten's place
		 	 	 counter+= 6;
	 	if (d2==9 || d2==6 || d2==5) 	 
		    	 counter+= 5;
	 	if (d2==7) 	 
		    	 counter+= 7;
	 	
	 	if (d3==1 || d3==2 || d3==6) 	    // d3 stores number in hundred's place
		 	 counter+= 13;
	 	else if (d3==4 || d3==9 || d3==5) 	 
		 	 counter+= 14;
	 	else if (d3==3 || d3==7 || d3==8) 	 
		 	 counter+= 15;
	 	
	 	if (num==100 || num==200 || num==300 || num==400 || num==500 || num==600 || num==700 || num==800 || num==900)
	 	{
	 	  if (num==100 || num==200 || num==600) 	 	 
		    return  10;        // hundreds
	 	else if (num==400 || num==900 || num==500) 	 	 
		    return  11;
	 	else if (num==300 || num==700 || num==800) 	 	 
		    return  12;	
	 	}
		if (d==0 && d2!=0 && d3!=0)
		{ 
		   counter=0;
		if (d2==1)    
		   counter+=3;
		if (d2==3 || d2==2 || d2==4 || d2==8) 	 	 
		   counter+= 6;
	 	if (d2==9 || d2==6 || d2==5) 	 	 
		   counter+= 5;
	 	if (d2==7) 	 	 
		   counter+= 7;
		
		if (d3==1 || d3==2 || d3==6) 	 	 
		   counter+= 3;
	 	else if (d3==4 || d3==9 || d3==5) 	 	 
		   counter+= 4;
	 	else if (d3==3 || d3==7 || d3==8) 	 	 
		   counter+= 5;
	 	
		 counter+=10;
	 	
	 	return counter;
		}
	 	
	    return counter;
        }
		//////////////////////////
		if (num>20 && num<100)                                  // For numbers 21 to 99
		{
		if (d==1 || d==2 || d==6) 	 	 
		   counter+= 3;
	 	else if (d==4 || d==9 || d==5) 	 	 
		   counter+= 4;
	 	else if (d==3 || d==7 || d==8) 	 	 
		   counter+= 5;
	 	
	 	if (d2==3 || d2==2 || d2==4 || d2==8) 	 	 
		   counter+= 6;
	 	if (d2==9 || d2==6 || d2==5) 	 	 
		   counter+= 5;
	 	if (d2==7) 	 	 
		   counter+= 7;
	 	
	 	return counter;
		}
	 	///////////////////////////
	    if (num>=1 && num<=10)                                 // For numbers 1 to 9
		{
		if (num==1 || num==2 || num==6 || num==10) 	 
		    	 return 3;
	 	if (num==4 || num==9 || num==5) 	 	  
		        return 4;
	 	if (num==3 || num==7 || num==8) 	 	  
		        return 5;
	    }
	    //////////////////////////
}
int main()
{
	int i;
	long long int letter_count=0;
	for (i=1;i<=1000;i++){
	letter_count+=letter_count_fn(i);    
	}
	
	cout<<"\n The letter count is : "<<letter_count;
}


