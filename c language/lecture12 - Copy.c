/*#include<stdio.h>
void main()
{
	int num1 , num2 ,sum;
	
	printf("enter the num1=");
	scanf("%d",& num1);
	
	printf("enter the num2=");
	scanf("%d",& num2);
	
	sum = num1 +num2;
	
	printf("sum of two num:%d",sum);
}
 

 #include<stdio.h>
void main()
{
	int num1 , num2 ,sum,mul,sub,div;
	
	printf("enter the num1=");
	scanf("%d",& num1);
	
	printf("enter the num2=");
	scanf("%d",& num2);
	
	sum = num1 +num2;
	mul=num1*num2;
	sub=num1-num2;
	div=num1/num2;
	printf("sum of two num:%d\n",sum);
	printf("mul of two num:%d\n" ,mul);
	printf("sub of two num:%d\n" ,sub);
	printf("div of two num:%d\n" , div);
	
}  

#include<stdio.h>
void main()
{
	int l,b,p,area;
	
	printf("enter length");
	scanf("%d",&l);
	
	printf("enter breadth");
	scanf("%d",&b);
	
	p=2*(l+b);
	area=l*b;
	printf("perimeter:%d",&p);
	printf(" area:%d",&area);
} 

#include<stdio.h>
void main()
{
	int r,d, cir, area;
	
	printf("enter the radius");
	scanf("%d",&r);
	
	d=2*r;
	cir=2*3.14*r;
	area=3.14*r*r;
	
	printf("diameter of circle:%d",d);
	printf("circumference of circle:%d",cir);
	printf("area of circle%d",area);
}
  
#include<stdio.h>
void main()
{    float c,m, km;
	printf("enter length in centimeter:");
	scanf("%f",&c);
    
     m=c/100.0;
     km=c/100000.0;
    printf("length in meter:%f\n length in kilometer:%f",m,km);
    
} 
#include<stdio.h>
void main()
{
	int ce,fa;
	printf("enter the temp in celcius=");
	scanf("%d",&ce);
	
	fa=9/5*ce+32;
	printf("temperature in fahrenheit:%d",fa);
	
} 

#include<stdio.h>
void main()
{
    float day ,weeks,years;
	
	printf("enter the days");
	scanf("%f",&day);
	
	weeks=day/7;
	years=day/365;
	
	printf("no of weeks:%f\n",weeks);
	printf("no of years:%f",years);
	
} 

#include<stdio.h>
#include<math.h>
void main()
{
	int num1,num2,j;
	
	printf("enter the num1=");
	scanf("%d",&num1);
	
	printf("enter the num2=");
	scanf("%d",&num2);
	
	
	j=pow(num1,num2);
	
	printf("power of number:%d",j);
} 
#include<stdio.h>
#include<math.h>
void main()
{
	 int num ;
	 float j;
	printf("enter the num=");
	scanf("%d",&num);
	j=sqrt(num);
	printf("square root of number=%f",j );
} 

 
#include<stdio.h>
void main()
{
	int A1,A2,A3;
	
	printf("enter the angle 1=");
	scanf("%d",&A1);
	
	printf("enter the angle 2=");
	scanf("%d",&A2);
	
	A3=180-A1-A2;
	
	printf("angle3=%d",A3);
	
	
} 
#include<stdio.h>
void main()
{
   int h,b  ;
   float area;
   printf("enter the height:");
   scanf("%d",&h);
   
   printf("enter the base:");
   scanf("%d",&b);
   
   area= 0.5*b*h;
   
   printf("area of triangle:%f",area);

} 
#include<stdio.h>
void main()
{
	int a ;
	float area;
	printf("enter the side ");
	scanf("%d",&a);
	
	area =1.7/4*a*a;
	printf("area of eqi triangle%f",area);
} 
#include<stdio.h>
#include<math.h> 
void main()
{
    float p,t,r,ci;
	
	printf("enter principal");
	scanf("%f",&p);
	
	printf("enter time");
	scanf("%f",&t);
	
	printf("enter  rate");
	scanf("%f",&r);
	
	ci=p*pow(1+r/100,t);
	
	printf("compound interest %d",ci);
	
	
	
} 
#include<stdio.h>
void main()
{
	printf("\t\t\tmarksheet\t\t\t\n");
	printf("\t\t\t----------------\t\t\t\n");
	printf("\t subject \t\t marks\n");
	printf("\t\t\t----------------\t\t\t\n");
	printf("\t physics \t\t 56\n"); 
	printf("\t chemistry \t\t 67\n");
	printf("\t maths \t\t\t  85\n");
	printf("\t\t\t----------------\t\t\t\n");
	printf("\t total\t\t\t 208\n");
	printf("\t  percentage\t\t 70\n");     
}  
#include<stdio.h>
void main()
{
	int num,sq,cub;
	printf("enter the value of num=");
	scanf("%d",&num);
	
	
	
	
	
	if(num>0)
	{
	 sq=num*num;
	cub=num*num*num;
	 
	printf("square of num:%d\n", sq);
    printf(" cube of num:%d\n", cub);
	}
	else 
	{
		printf("num is invalid");
	}
} 
#include<stdio.h>
void main()
{    float s, da,hra,pf,ns;
 
	printf("enter the salary:");
	scanf("%f",&s);
	
	if(s>20000)
	{
		da =s*35.0/100;
		hra=s*12.0/100;
		pf =s*8.0/100;
		printf("da=%f\n hra=%f\n pf=%f\n",da,hra,pf);
	}
	else
	{
	    da =s* 20.0/100;
		hra=s* 10.0/100;
		pf =s* 5.0/100;
		printf("da=%f\n hra=%f\n pf=%f\n",da,hra,pf);
	 
	}
	 ns=da+hra+pf+s;
	 printf("net salary:%f",ns);
 
} 

#include<stdio.h>
void main()
{   int num;
	printf("enter a number:");
	scanf("%d",&num);
	
	if(num%2==0)
	{printf("num is divisible by 2");
	
	}
	else{
		printf("num is not divisible by 2");
	}
 
} 

#include<stdio.h>
void main()
{
	int num;
	
	printf("enter the age=");
	scanf("%d",&num);
	
	if (num>18)
	{
		printf("person is not tenager");
		
	}
	else
	{
		printf("person is tenager");
	}
	
} 

#include<stdio.h>
void main()
{
	int nc,ec,ea,ta;
	
	printf("enter the no of call:");
	scanf("%d",&nc);
	
	if(nc>200)
	{ 
	    ec=nc-200;
	    printf("no of extra call: %d\n",ec);
	    
	    ea=ec*3;
		printf("extra amount:%d\n",ea);
		
		ta=ea+360;
		printf("total amount:%d\n",ta);
		
	}
	else
	{
		printf("total amount is 360");
	}
  
} 

 
#include<stdio.h>
void main()
{
	int ed,di,ea,ta,gst,na;
	
	printf("enter the distance:");
	scanf("%d",& di);
	
	if( di>20)
	{ 
	    ed= di-20 ;
	    printf(" extra distance travel: %d\n",ed);
	    
	    ea=ed*10;
		printf("extra amount:%d\n",ea);
		
		ta=ea+80;
		printf("total amount:%d\n",ta);
		
		gst=ta*0.18;
		
		na=gst+ta;
		
		printf("net amont :%d",na);
	}
	else
	{
		printf("total amount:is 80");
	}
  
} 

#include<stdio.h>
void main()
{   
    int i=10;
	xyz:
	printf("%d,",i);
	i=i-1;
	if(i>=1)
	{
		 
		goto xyz;
    } 
	printf("\b ");	
} 
 
  
  
#include<stdio.h>
void main()
{
	int i=1;
	xyz:
    printf("%d,",i);
	i=10*i;
	if(i<=1000)
   {
   	 goto xyz;
     	
   }
 
} 
#include<stdio.h>
void main()
{
	int i=1000;
	xyz:
    printf("%d,",i);
	i=  i/10.0;
	if(i>=1 )
   {
   	 goto xyz;
     	
   }
 
} 

#include<stdio.h>
void main()
{
   int i=1,sq,cu;
   xyz:
   printf("%d,",i);
   sq=i*i;
   printf("%d,",sq);
   cu=i*i*i;
   printf("%d,",cu);
   
   i=i+1;
   if (i<=5)	
   {
   	goto xyz;
   }
   	
	
} 

#include<stdio.h>
void main()
{
	int i=2;
	xyz:
    printf("%d,",i);
    i=i+2;
    printf("%d,", i);
    i= i+4;
    if(i<=26)
    {
    	goto xyz;
	}
   
} 
#include<stdio.h>
void main()
{
	int n,i=1,p=1;
	printf("enter the number:");
	scanf("%d",&n);
	xyz:
	p=p*i;
	i=i+1;
	if(i<=n)
	{
		goto xyz;
		  
	}
	 printf("product: %d",p);
} 

#include<stdio.h>
void main()
   
{
	 int n,i=1,t;
	 printf("enter the no:");
	 scanf("%d",&n);
	 xyz:
	t=n*i;
	i=i+1;
	printf("%d\n",t);
	if(i<=10)
	{
		goto xyz;
	}
  
	 
} 
#include<stdio.h>
void main()
{
	int i=0,n,t;
	printf("enter the no:");
	scanf("%d",&n);
	xyz:
	i=i+n;
	printf("%d\n",i);
	if(i<=10*n)
	{
		goto xyz;
	}
	printf("%d\n",i);
} 
#include<stdio.h>
void main()  
{
	int i=1;
	 
	xyz:
	  	
	i=i*2;
	printf("%d,",i);
	if(i<=64)
	{
		goto xyz;
	}	
 	
		
}
#include<stdio.h>
void main()
{
	int i=2,j=1;
	printf("%d,",i);
	xyz:
	i=i+3*j;
	j=j+1;
	printf("%d,",i);
	if(i<=47)
	{
		goto xyz;
	}
 	
}
#include<stdio.h>
void main()  
{
	int i=1;
	 
	printf("%d,",i);
	xyz:   	
	i=i*2;
	printf("%d,",i);
	if(i<=64)
	{
		goto xyz;
	}	
 	
		
} 
#include<stdio.h>
void main()
{
	int i=2,j=1;
	printf("%d,",i);
	xyz:
	i=i+3*j;
	j=j+1;
	printf("%d,",i);
	if(i<=47)
	{
		goto xyz;
	}
 	
} 

#include<stdio.h>#include<stdio.h>
void main()
{
	int i=2,j=1;
	printf("%d,",i);
	xyz:
	i=i+3*j;
	j=j+1;
	printf("%d,",i);
	if(i<=47)
	{
		goto xyz;
	}
 	
}  

void main()
{
	int i=10,j=1;
	xyz:
	printf("%d,",i);	
	i=i+10*j;
	j=j+1;
	if(i<=160)
	{
		goto xyz;
	}
 	
} 
#include<stdio.h>
void main()
{
	int i=20;
	xyz:
	printf("%d,",i);
	i=i-5;
	printf("%d,",i);
	i=i+10;
	if(i<=40)
	{
		goto xyz;
	}
	
} 
#include<stdio.h>
void main()
{
   int s=0,i=1;
   xyz:
   if(i%2!=0)
   {
   s=s+i;
   
   }
   i=i+1;
   if(i<=10)
   {
   	goto xyz;
   		
   }
   printf("%d",s);
  
} 

#include<stdio.h>
void main()
{
	int count=0,i=1;
	xyz:
	if(i%2==0)
	{
		count =count +1;
	}
	i=i+1;
	if(i<=10)
	{
		goto xyz;
		
	}
	
	printf("%d",count);
	
 
} 

#include<stdio.h>
void main()
{
	int c,f;
	printf("enter the temperature in f:");
	scanf("%d",&f);
	c=5.0/9*(f-32);
	printf("temperature in celcius:%d",c);
	
 
} 
#include<stdio.h>
void main()
{
     int r,v,s;
     printf("enter the radius:");
     scanf("%d",&r);
     s=4*3.14*r*r;
     v=4.0/3*3.14*r*r*r;
     printf("surface area is :%d\n",s);
     printf("volume is :%d",v);     
   
}*/


 





























































































