#include<stdio.h>

void PrecisionProgram(int n)
{
	int d,x=22,y=7,i;
	if(n<=0)
	return ;
	else
	if(n>0)
	{
		d=x/y;
	 
		for(i=0;i<=n;i++)
		{ 			
			printf("%d",d);
			x=x-(y*d);
			if(x==0)
			break;
			x=x*10;
		   	d=x/y;			 
			if(i==0)
			printf(". ");
				
		}
	 
	} 	
}

void main()
{
	
//  float num = 5.48958123; 
//  
//    // 4 digits after the decimal point   
//    printf("%0.1f", num);  
//    return 0;  
  
	int n;
	printf("Enter how many digits you want in PI (max 10 \n");
	scanf("%d",&n);
	PrecisionProgram(n);
	
}
