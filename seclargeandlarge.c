#include<stdio.h>

main()
{
	int a,b,c;
	int large,seclarge;
	printf("Enter 3 different numbers(non zero,non negative)\n");
	scanf("%d %d %d",&a,&b,&c);
	if((a==b)&&(b==c)&&(c==a))
	{
	printf("All the numbers are equal\n");
    }
	
	else
	if((a==b)||(b==c)||(c==a))
	{
	printf("Two numbers are equal\n");
	}
	
	else
	{
	if((a>b)&&(a>c))
      {large=a;	  
	  if(b>c)
	  seclarge=b;
	  else
	  seclarge=c;
      }
    if((b>a)&&(b>c))
      {large=b;
	  
	  if(a>c)
	  seclarge=a;
	  else
	  seclarge=c;
      }
    if((c>a)&&(c>b))
      {large=c;
	  
	  if(a>b)
	  seclarge=a;
	  else
	  seclarge=b;
      }
      printf("The largest no is %d\n",large);
      printf("The 2nd largest no is %d\n",seclarge);
  }        
  }

