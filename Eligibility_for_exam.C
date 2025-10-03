/*
Name:Patrick Nyanjui
Reg No:CT101/G/28857/25
Description:Eligibility-Exam
*/

   #include<stdio.h>
  int main()
  {
  	//variable declaration
  	 int average_marks;	
  	 float attendance;
  	 
//prompt the user
printf("enter your attendance in percentage:");
scanf("%f",&attendance);

printf("enter the average_marks:");
scanf("%d",&average_marks);

//calculation of eligibility 
if(average_marks>=75 &&attendance>=40)
{printf("you are eligible for the exam:");}else
	
if(average_marks<75 &&attendance<40)	
{printf("you are not eligible for the exam:");}

return 0;
}
	


	
	

  	 

  
