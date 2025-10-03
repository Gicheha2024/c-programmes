/*
Name:Patrick Nyanjui
Reg No:CT101/G/28857/25
Description:Water_Units
*/

#include <stdio.h>
  int main()
  {
  	//input water units
  	int units;
  	float bills;
  	//variable Declaration
  	printf("Enter the number of water units consumed:");
  	scanf("%d",&units);
  	
  	//bill calculation
  	if(units<30){bills=units*20;}else
  	if(units>=31 &&units<=60){bills=units*25;} else
    if(units>60){bills=units*30;}
    	
   printf("total water bills:%.2fKES\n",bills);
return 0;
  }
