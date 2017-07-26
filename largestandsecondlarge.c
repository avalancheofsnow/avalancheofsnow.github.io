#include<stdio.h>

main()
{
	int a,b,c;
	printf("Enter 3 numbers(non zero)\n");
	scanf("%d %d %d",&a,&b,&c);
	if((a>b)&&(a>c))
      {
	  
	  if(b>c)
      
      {printf("The largest no is %d\n",a);
      printf("The 2nd largest no is %d\n",b);
      }   
      
      else
      {
	  printf("The largest no is %d\n",a);
      printf("The 2nd largest no is %d\n",c);
      }
      
      }
      
	if((b>c)&&(b>a))
      {
	  if(a>c)
      
      {printf("The largest no is %d\n",b);
      printf("The 2nd largest no is %d\n",a);
      }   
      
      else
      {
	  printf("The largest no is %d\n",b);
      printf("The 2nd largest no is %d\n",a);
      }
      }
      
    if((c>a)&&(c>b))
    {
    if(a>b)
    {	
	printf("The largest no is %d\n",c);
    
	printf("The 2nd largest no is %d\n",a);
    }
	else
	{
	printf("The largest no is %d\n",c);
    printf("The 2nd largest no is %d\n",b);
    
	}      
    }
}
      
      
