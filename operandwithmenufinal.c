#include<stdio.h>
main()
{int a,b;
int choice;
printf("Enter the two numbers\n");
scanf("%d %d",&a,&b);
printf("Operands:\n 1. Addition(+)\n 2.Subtraction(-)\n 3.Multiplication(*)\n 4.Division(/)\n");
printf("Select the option for the operand\n");
scanf("%d",&choice);
switch(choice)
{case 1:{printf("Addition of the two numbers=%d\n",(a+b));
         break;
 }
 case 2:{printf("Subtraction of the two numbers=%d\n",(a-b));
	break;
 }
 case 3:{printf("Multiplication of the two numbers= %d\n",(a*b));
 	break;
 }
 case 4: {
 if(b==0)
 {printf("Division of the two numbers is undefined.");
 }
 else 
 { 
 printf("Division of the two numbers=%d\n",(a/b));
 }
	break;
 }
 default: {
 printf("Invalid Input.\n");
 printf("Enter the numbers again.");
           
}
}
}


