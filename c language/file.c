/*#include<stdio.h>
void main()
{
	int nc ,nec ;
	float bill;
	printf("no of calls: ");
	scanf("%d",&nc);
	
	if(nc<=100)
	{
	  	bill=nc*2.5;
	  	printf("totol bill of the customer :% f\n",bill);
	}
	 
	else{
	
	nec=nc-100;
	printf("no of extra call: %d\n",nec);
	
	bill=100*2.5+nec*1.5;
	
	printf("total bill of the customer :% f\n",bill);
}
} 
#include<stdio.h>
void main()
{
	int num ;
	printf("enter the num:");
	scanf("%d",&num);
	if (num%2==0)
	{
		printf("%d: is a even number",num);
		
	}
	else{
		printf("%d: is a odd number",num);
		
	}
 
} 
#include<stdio.h>
void main()
{ 
      
    int sum=0,i=100;
    
    xyz:
    if(i%7==0)
    {
    	sum =sum+i;
    	printf("%d,\n",i);
	}
	
      i=i+1;
      if(i<=200)
      goto xyz;
      
      
    printf("sum :%d",sum);

}*/

#include<stdio.h>
void main()
{
	int pc;
	printf("enter the percentage");
	scanf("%d",&pc);
	
	if(pc<=100 && pc>=60)
	   {
	   	   printf("first division");
	   	 
	   }
	
	else if(pc<=59 && pc>=48)
	    {
	    	printf("second division ");
	    	
		}
	else if(pc<=47 && pc>=35)
	     {
	     	pintf(" third division");
		 }
	else if(pc<=34 && pc>=0)
	     {
	     	printf(" fail");
	     	
		 }
		 else 
		{
	printf(" invalid number ");
		  
		  }
}





















































































































































