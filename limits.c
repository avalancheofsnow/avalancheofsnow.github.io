/*this is a program to print the size and range of various datatypes
Date:23/06/17*/


#include<stdio.h>
#include<limits.h>
#include<float.h>
main()
{int x,b,c,d,e,f;
x=sizeof(int);
b=sizeof(short int);
c=sizeof(long int);
d=sizeof(char);
e=sizeof(float);
f=sizeof(double);
printf("Size is=%d\n",x);
printf("Size is=%d\n",b);
printf("Size is=%d\n",c);
printf("Size is=%d\n",d);
printf("Size is=%d\n",e);
printf("Size is=%d\n",f);
printf("Range is from %d to %d\n", INT_MIN, INT_MAX);
printf("Range is from %d to %d\n", SHRT_MIN, SHRT_MAX);
printf("Range is from %d to %d\n", LONG_MIN, LONG_MAX);
printf("Range is from %d to %d\n", CHAR_MIN, CHAR_MAX);
printf("Range is from %10e to%10e\n",FLT_MIN,FLT_MAX);
printf("Range is from %10e to %10e\n",DBL_MIN,DBL_MAX);

}
