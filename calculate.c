/*
Expt no.1
Question:simulation of simple calcutor
Name: ms.rakshitha
Roll no: 8
Date:30.12.2021
*/
#include <stdio.h>
int main()
{
	char op;
	int num1,num2,result;
printf("Enter the operator\n"); 
scanf("%c",&op);
printf("Enter two integers\n");
scanf("%d%d",&num1,&num2);
	if(op == '+')
	{
         result=num1+num2;
	
        }	
         else if(op == '-')
        {
         result =num1-num2;
        }
         else if(op =='*')
        {
          result=num1*num2;
        }
         else if(op =='%')
        {
         result =num1%num2%;
        }
         else
        {
         printf("invalid operator");
        }
         return 0;
}
        
