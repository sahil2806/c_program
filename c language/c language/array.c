#include<stdio.h>
void main ()
{
	int n,i,s,p;
	
	printf("enter  number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{   
	    s=0;
	    p=i;
		while(p)
		{  
			int r=p%10;
			s=s+r;
			p=p/10;
			
		}
		printf("%d  ",s);
	
	}
}
