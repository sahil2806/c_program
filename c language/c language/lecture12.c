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
   
}
#include<stdio.h>
void main()
{
	float av;
	int i=1,s=0;
	xyz:
	s=s+i;
	i=i+1;
	if(i<=10)
	{
		goto xyz;
		
	}
	av=s/10.0;
	printf("sum of first 10 natural number:%d\n",s);
	printf("average of first 10 natural number:% f\n",av);
 
} 
#include<stdio.h>
void main()
{
	int i=1,j=1;
	xyz:
	printf("%d,",i);
	i=i+2*j;
	j=j+1;
	if (i<=31)
	{
		goto xyz;
	}
  
} 
 
#include<stdio.h>
void main()
{
	int i=1,j=0;
	xyz:
	printf("%d,",i);
	i=i+1+2*j;
	j=j+1;
	if(i<=26)
	{
		goto xyz;
	}
 
	
} 

 
#include<stdio.h>
void main()
{
	int i=2,j=0;
	xyz:
	printf("%d,",i);
	i=i+6+4*j;
	j=j+1;
	if(i<=50 )
	{
		goto xyz;
	}
 
	
} 

#include<stdio.h>
void main()
{
    
	printf("\t\t\t\t\t\t MARKSHEET\t\t\t\n");
	printf("-------------------------------------------------  ");
	printf(" SUBJECT MARKS\t\t\t\n");
	printf("---------------------------------------------------- ");
	printf(" english\t\t\t\n");
	printf("---------------------------------------------------- ");
	printf(" maths \t\t\t \n");
	printf("--------------------------------------------------- ");
	printf("science\t\t\t\n");
	printf("----------------------------------------------------- ");
	printf(" total marks\t\t\t\n ");
	printf("------------------------------------------------------ ");
	printf(" percentage \t\t\t \n");
 
}  

#include<stdio.h>
void main()
{
	int i=1;
	xyz:
	printf("x*%d+",i);
	i=i+2;
	;
	if(i<=7)
	{
		goto xyz;
	}
	
} 

#include<stdio.h>
void main()
{
	int i=1;
	xyz:
	printf("%d,",i);	
	i=i*2;
	 
	if (i<=32)
	{
		goto xyz;
	}
 
} 

#include<stdio.h>
void main()
{
	int i=6;
	xyz:
	printf("%d,",i);
	i=i+5;
	printf("%d,",i);
	i=i-3;
	if(i<=100)
	{
		goto xyz;
		
	}
} 

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
	     	printf(" third division");
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

#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the number");
	scanf("%d",&a);
	printf("enter the number");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("%d is maximum number ",a);
	}\
	else
	{
		printf("%d is maximum number ",b);
	}
} 
  
  

#include<stdio.h>
void main()
{        
        int a,b,c;
 
        printf("enter number a,b,c:");
		scanf("%d %d %d",&a,&b,&c);	
		
		if(a>b && a>c)
		{
			printf("%d is maximum number",a);
		}
		else if(b>a && b>c)
		{
			printf("%d is maximum number");
			
		}
		else if (c>a && c>b)
		{
			printf("%d is maximum number");
		}
		
} 


#include<stdio.h>
void main()
{
	int num;
	printf("enter the num");
	scanf("%d",&num);
	
	if (num%2==0)
	{
		printf("number is even");
		
	}
    else 
    printf("no is odd");
 
} 

#include<stdio.h>
void main()
{
	int year;
	printf("enter the year ");
	scanf("%d",& year);
	
	if(year%400==0)
	{
		printf("%d is leap year",year);
	}
	
	else if(year%100==0)
	{
		printf("%d is not a leap year",year);
	}
 
	else if(year%4==0)
	{
		printf("%d is leap year",year);
	}
	else
	{
		printf("invalid year");
	}
 
	
} 

#include<stdio.h>
void main()
{
	int num;
	printf("enter the no:");
	scanf("%d",& num);
	
	if (num>0)
	{
		printf("num is positive");

	}
    
	else if (num=0)	
	
	{
		printf("num is zero");
		
	}
	else if (num<0)
	
	{
		printf(" num is negative ");
		
	}
	else
	printf(" num is invalid");
 
	
}

#include<stdio.h>
void main()
{
	int a;
	printf("enter the number ");
	scanf("%d",& a);
	
	if (a%5==0 && a%11==0)
	{
		printf("%d is divisible by 5 and 11",a);
	}
	else
	printf("no is invalid");
	
 
	
} 
#include<stdio.h>
void main()
{
	int  h,lh,lp,tp,eh,ea;
	printf("enter the  hours ");
	scanf("%d",& h);
	
	if(h<8 && h>1)
	 
	{     
	    lh=8-h;  
		printf("%d hours is less\n",lh);
		lp=800*3/100*lh;
		printf("less is payment:%d\n",lp);
		tp=800-lp;
		printf("total payment %d\n",tp);
	}
	else if(h>9)
	{
	
	     eh=h-8;  
		printf("%d hours is extra \n", eh);
		 ea=800*3/100* eh;
		printf("extra payment:%d\n", ea);
		tp=800+ea;
		printf("total payment %d\n",tp);
	
	    	
	}
	
	else if (h==8)
	{
		printf("total amount is 800");
	}
	else
	{
		printf("invalid hours");
	}
 
} 

#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the angle  no 1:");
	scanf("%d",&a);
	
	printf("enter the angle  no  2:");
	scanf("%d",&b);
	
	printf("enter the angle  no 3:");
	scanf("%d",&c);
	
	if(a+b+c==180)
	{
		printf("triangle is valid");
		
	}
	
	else
	printf("invalid triangle ");
	
 
} 

#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("enter the side of triangle");
	scanf("%d",&a);
	
	printf("enter the side f triangle ");
	scanf("%d",&b);	
	  
    printf("enter the side of triangle");
	scanf("%d",&c);
	
	if(a==b && b==c && c==a)
	 {
	 	printf("triangle is equilateral\n");
	 	
	 }
	 
	 else if (a==b || b==c|| c==a)
	 {
	 
	 printf("triangle is isosceles\n");
	 
     }
	 else if (a!=b && b!=c && c!=a);
	 {
	 	printf("triangle is scalene\n");
     }	 
 
} 

#include<stdio.h>
#include<math.h>
void main()
{
     int a,b,c, root1 , root2;
	 printf("enter the value a,b,c");
	 scanf("%d %d %d",&a ,&b ,&c);
	
	 root1 =(-b + sqrt(b*b-4*a*c))/2*a;
	
	root2 =(-b - sqrt(b*b-4*a*c))/2*a;
	
	printf("root1 is %d\n", root1);
	printf("root2 is %d\n", root2);
		
	
	
} 
 
#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("enter the side of triangle");
	scanf("%d",&a);
	
	printf("enter the side f triangle ");
	scanf("%d",&b);	
	  
    printf("enter the side of triangle");
	scanf("%d",&c);
	
	if(a==b && b==c && c==a)
	 {
	 	printf("triangle is equilateral\n");
	 	
	 }
	 
	 else if (a==b || b==c|| c==a)
	 {
	 
	 printf("triangle is isosceles\n");
	 
     }
	 else 
	 {
	 	printf("triangle is scalene\n");
     }
	 
 
} 

#include<stdio.h>
void main()
{
	int num;
	printf("enter the no:");
	scanf("%d",& num);
	
	if (num>0)
	{
		printf("num is positive");

	}
    
	else if (num==0)	
	
	{
		printf("num is zero");
		
	}
	else if (num<0)
	
	{
		printf(" num is negative ");
		
	}
	else
	printf(" num is invalid");
 
	
} 

#include<stdio.h>
void main()
{
	int a,x,y,p,q,m,n,r,s,u,v;
    printf("enter the amount:");
    scanf("%d",&a);
    
    x=a/2000;
    y=a%2000;
    printf("no of 2000 notes:%d\n",x);
    
    p=y/500;
    q=y%500;
    printf("no of 500 notes:%d\n",p);
    
    m=q/200;
    n=q%200;
    printf("no of 200 notes:%d\n",m);
    
	r=n/100;
	s=n%100;
	printf("no of 100 notes:%d\n",r);
 
    u=s/50;
    v=s%50;
    printf("no of 50 notes :%d",u);
    
 
} 

#include<stdio.h>
void main()
{
	
	 float s,da,hra,ts;
	 printf("enter the salary:");
	 scanf("%f",&s);
	 
	 if(s>10000 && s<20000)
	{
		hra=s*.20;
		da=s*.80;
		ts=hra+da;
		printf(" da:%f\n  hra:%f\n  ts:%f\n",da,hra,ts);
	}
	
	
    else if(s>20000 && s<30000)
	{
		hra=s*.25;
		da=s*.90;
		ts=hra+da;
		printf(" da:%f\n  hra:%f\n  ts:%f\n",da,hra,ts);
	}
 
    else if(s>30000 )
	{
		hra=s*.30;
		da=s*.95;
		ts=hra+da;
		printf(" da:%f\n  hra:%f\n  ts:%f\n",da,hra,ts);
	}
 
} 

#include<stdio.h>
void main()
{   

    float bill;
	int nu;
	printf("no of unit:");
	scanf("%d",& nu);
	
	if( nu<50)                                  
	{    
	    bill=nu*.50;
		printf("bill:%f",bill);
	}
	else if(nu<150 && nu>50)
    {
    	bill=50*0.50+ (nu-50)*.75;
    	printf("bill:%f",bill);
	}	
	
	else if(nu<250 && nu>150)
    {
    	bill=50*0.50+  100*.75+(nu-150)*1.20;
    	printf("bill:%f",bill);
	}	
 	
	
}  

#include<stdio.h>
void main()
{
	int age,hs,ex,im;
	
	printf("enter the age:");
	scanf("%d",& age);
	
	if(age>20 && age <23)
	{
		printf("age satisfied\n");
		printf("enter the higher score:\n");
		scanf("%d",& hs);
		
		if(hs>60 && hs<100)
		{
			printf("higher secondary score is satisfied\n");
			printf("enter the marks of exam:");
			scanf("%d",&ex);
			
			if(ex<100 && ex>80)
			    {
				
			     printf("call for interview\n");
			     printf("enter marks in interview:");
			     scanf("%d",&im);
			     
			     if(im >70 && im<100)
			        {     
                         printf(" candidate is selected\n");			        
			        
					}
			     else
			     {
			     	printf("candidate is rejected\n");
				 }
			
			    }
			    else
			    {
			    	printf("candidate does not qualify for interview\n");
				}
			    
			    
			    
			
		}
		
		else
		{
			printf("higher secondary score is not good \n");
		}
	 
		
		
	}
	else
	{
		printf("age is not satisfied");
	}
	
	 
 	
	
} 

#include<stdio.h>
void main()
{
	int ans;
	printf("1: first pm of india:");
	scanf("%d",&ans);
	printf("1:SG\t\t 2: JLN \t\t 3: ATL \t\t4: NONE \n");
	printf("enter your choice");
    scanf("%d",&ans);
    
       
       if(ans==2)
   {
	printf("prize  money is  1000 \n");
	printf("2:how many colour in indian flag:");
	scanf("%d",&ans);
	printf("1:two \t\t 2:three\t\t 3:four \t\t 4: five");
	printf("enter your choice\n");
	scanf("%d",&ans);
	    
	      
	        if(ans==2)
	        
	        {
			
            printf("prize money is 2000\n");
            printf("2: most popular game in india:");
	        scanf("%d",&ans);
	        printf("1:hockey \t\t 2:cricket\t\t 3:footboll\t\t 4:kabadii");
	        printf("enter your choice\n");
	        scanf("%d",&ans); 
			       
				   if(ans==2) 
                    {
                    	 printf("prize money is 3000");
					}
                    else
                    {
                    	printf("prize money is 2000");
					}

        }
        else
        {
        		printf("prize money is 1000");
		}
   }
    else
    {
    		printf("prize money is  0");
	}

}  

#include<stdio.h>
void main ()
{
	int year;
	printf("enter the year ");
	scanf("%d",&year);
	
	if (year%100!=0 && year%4==0)
     {
     	printf("%d is a leap year",year);
   
      }
     
     else if(year%100==0 && year%400==0)
     {
     	printf("%d is a leap year",year);
	 }
   else{
   	printf("%d is a not  year",year);
   }



} 
#include<stdio.h>
void main()
{
	int ce=0,co=0,i=1;
	xyz:
	 
	if(i%2==0)
	{
		ce=ce+1;
	}
	else 
	{
		co=co+1;
	}
	i=i+1;
	if(i<=20)
	{
		goto xyz;
	}
	printf("no of value of even :%d\n ",ce);
	printf("no of value of  odd :%d",co);
} 

#include<stdio.h>
void main()
{
	int i=1,x,s=0;
	printf("enter the value of x:");
	scanf("%d",&x);
	xyz:
	printf("%d*%d+",x,i);
	s=s+x*i;
	i=i+2;
	if (i<=7)
	{
		goto xyz;
	}
	printf("\b ");
	printf("the sum of expression:%d",s);
 

} 

#include<stdio.h>
void main()
{   int x;
	printf("enter the number:");
	scanf("%d",&x);
     if (x>=1000)
	{
		printf("putrely positive");
	}
	
	else if (x>=100 && x<999)
	{
		printf("very positive");
	}
	
	
	else if (x>0 && x<100)
	{
		printf("  positive");
	}
	
	
	
	else if ( x==0)
	{
		printf("zero");
	}
	
	
	else if (x<0 && x>-100)
	{
		printf("negative");
	}
	
	
	else if (x>-999 && x<=-100)
	{
		printf("very negative");
	}
	
	
	
	else if (x>=1000)
	{
		printf("putrely positive");
	}
	
	
	
	else if ( x<=-1000)
	{
		printf("purely negative ");
	}
 
	
} 

#include<stdio.h>
void main()
{
    float h,m,bmi;
	printf("enter the height of person:");
	scanf("%f",&h);
	
	printf("enter the weight of person:");
	scanf("%f",&m);
	
	bmi=m/h*h;
	
	 if(bmi<=15)
	{
		printf("very surely overweight ");
	}
	
	else if(bmi>15 && bmi<=16)
	{
		printf("very surely overweight ");
	}
	
	
	else if(bmi>16 && bmi<=18.5)
	{
		printf(" underweight ");
	}
	
	
	else if(bmi>18.5 && bmi<=25 )
	{
		printf("normal ");
	}
	
	
	
	
	else if(bmi>25 && bmi<=30 )
	{
		printf(" overweight ");
	}
	
	
	
	
	else if(bmi>30 && bmi<=35 )
	{
		printf(" obese class 1 ");
	}
	
	
	else if( bmi>35 && bmi<=40)
	{
		printf("obese class 2  ");
	}
	
	
	
	else if( bmi>40 )
	{
		printf("obese class 3  ");
	}
 
	
}  

  
#include<stdio.h>
void main()
{
	float am,nu;
	printf("enter the amount of bill:");
	scanf("%f",&am);
	if(am>0 && am<=200)
	{ 
	     nu =am/0.5;
	     printf("no of unit :%f",nu);
    }
    else if (am>=201 && am<=400)
	 {
	 	nu=(am-100)/0.65;
	 	printf("no of unit :%f",nu);
	 }
     else if(am>=401 && am<=600)
     {
     	 nu=(am-230)/.80;
     	 printf("no of unit :%f",nu); 
	 }
     else 
	 {
     	printf("invalid amount ");
	 } 
	 
} 
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the angle1:");
	scanf("%d",&a);
	
	printf("enter the angle2:");
	scanf("%d",&b);
	
	printf("enter the angle3:");
	scanf("%d",&c);
	
	
	if(a+b+c==180)
	{
		if(a==b==c)
		{
			printf("triangle is equilateral");
		}
		
		else if(a==b || b==c || c==a)
		{
			printf("triangle is isosceles");
		}
		
		else
		{
			printf("triangle is scalene");
		}
		
		
		
		
	}
	
	else
	{
		printf("invalid triangle");
	}
	
} 

#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the side of triangle:");
	scanf("%d",&a);
	
	printf("enter the side of triangle:");
	scanf("%d",&b);
	
	printf("enter the side of triangle:");
	scanf("%d",&c);
	
	if(a+b>c && b+c>a && c+a>b)
	printf("valid triangle");
	 
	 
	
	else
	printf("invalid triangle");
	
} 
#include<stdio.h>
void main()
{    
     int monthno;
     
	printf("enter the month no:");
	scanf("%d",&monthno);
	
	if(monthno%2==0 && monthno!=2)
	{
		printf("no of day %d month:30",monthno);
	}
	
	else if(monthno==2)
	{
		printf("no of day %d month:28",monthno);
	}
 
	
	else
	{
		printf("no of day %d month:31",monthno);
	}

 
}

#include<stdio.h>
void main()
{
	int d,m,y;
	printf("enter the date:");
	scanf("%d",&d);
	
	printf("enter the month:");
	scanf("%d",&m);
	
	printf("enter the year:");
	scanf("%d",&y);
	
	if(y>0 && y%100!=0 && y%4==0)
	{
		printf(" %d is valid year\n",y);
		
		if(m>=1 && m<=12)
		{
			 
			 if(m%2==0 && m!=2)
			 
			 {
			 	printf("valid month\n");
			 
			 if(d>=1 && d<=30)
			 {
			 	printf("valid date\n");
			 }
			 else 
			 {
			 	printf("invalid datn");
			 }
			 
			 
		    }
			 
			 else if(m%2!=0)
			 
			 {
			 	
			 	printf("valid month\n");
			 
			 if(d>=1 && d<=31)
			 {
			 	printf("valid date\n");
			 }
			 else 
			 {
			 	printf("invalid date\n");
			 } 
		    }
			 else if(m==2)
			 {
			     printf(" valid month \n");	
			     
			     if(d>=1 && d<=29)
			     printf("valid date");
			     else
			     printf("invalid date");
			}	
			 	
			  
			 	
			 }
 
	}
	else if(y>0  && y%100==0 && y%400==0)
	
	 	{
		printf(" %d is valid year\n",y);
		
		if(m>=1 && m<=12)
		{
			 
			 if(m%2==0 && m!=2)
			 
			 {
			 	printf("valid month\n");
			 
			 if(d>=1 && d<=30)
			 {
			 	printf("valid date\n");
			 }
			 else 
			 {
			 	printf("invalid datn");
			 }
			 
			 
		    }
			 
			 else if(m%2!=0)
			 
			 {
			 	
			 	printf("valid month\n");
			 
			 if(d>=1 && d<=31)
			 {
			 	printf("valid date\n");
			 }
			 else 
			 {
			 	printf("invalid date\n");
			 } 
		    }
			 else if(m==2)
			 {
			     printf(" valid month \n");	
			     
			     if(d>=1 && d<=29)
			     printf("valid date");
			     else
			     printf("invalid date");
			}	
			 	
			  
			 	
			 }
 
	}
	
	
	
	else if(y>0)
	
	
		{
		printf(" %d is valid year\n",y);
		
		if(m>=1 && m<=12)
		{
			 
			 if(m%2==0 && m!=2)
			 
			 {
			 	printf("valid month\n");
			 
			 if(d>=1 && d<=30)
			 {
			 	printf("valid date\n");
			 }
			 else 
			 {
			 	printf("invalid datn");
			 }
			 
			 
		    }
			 
			 else if(m%2!=0)
			 
			 {
			 	
			 	printf("valid month\n");
			 
			 if(d>=1 && d<=31)
			 {
			 	printf("valid date\n");
			 }
			 else 
			 {
			 	printf("invalid date\n");
			 } 
		    }
			 else if(m==2)
			 {
			     printf(" valid month \n");	
			     
			     if(d>=1 && d<=28)
			     printf("valid date");
			     else
			     printf("invalid date");
			}	
			 	
			  
			 	
			 }
 
	}
 
 
} 
 
 
 
#include<stdio.h>	
void main()	

{ int i=10;
   
   while(i)
   {
   	   printf("%d,",11-i);
   	   i=i-1;
   }
	printf("\b  ");
} 
	
#include<stdio.h>	
void main()	
	
{   int d,m,y;
    printf("enter the date");
    scanf("%d",&d);
    printf("enter the month");
    scanf("%d",&m);
	printf("enter the year");
    scanf("%d",&y);
	
	if(y>0)
	{
		printf("valid year");
		
		if(m>=1 && m<=12)
		{
			printf("valid month");
			
			if((d>=1 && d<=31) &&(m==1||m==3||m==5||m==7||m==9||m==11))
			{
				printf("valid date"); 
			}
			else if((d>=1 && d<=30) &&(m==4||m==6||m==8||m==10||m==12))
			{
				printf("valid date");
			}
			
			else if((d>=1 && d<=29) &&(m==2) &&((y!=100 && y%4==0) || y%400==0))
			{
				printf("valid date");
			}
			
			else if((d>=1 && d<=28) && (m==2))
			{
				printf("valid date");
			}
 
		}
		
		else
		{
			printf("invalid month");
		}
 
		
	}
	else
	{
		printf("invalid year");
	}
} 
#include<stdio.h>	
void main()
{
	 int co=0,ce=0,i=1;
	 while(i<=10)
	 {
	 	if(i%2==0)
	 	{
	 		ce=ce+1;
		 }
	 	else
	 	{
	 		co=co+1;
		 }
	 i=i+1;	
	 }
	 
	 
printf("%d\n",ce);
printf("%d",co);	 
	 
 
}  	   

#include<stdio.h>
void main()
{    float av,s=0;
    int 	i=1;
	while(i<=10)
	{
	    s=s+i;
		i=i+1;	
		
	 
	}
	printf("sum of first 10 natural no:%f\n",s);
	av=s/10.0;
	printf("average of first 10 natural number:%f",av);
	
} 
#include<stdio.h>
void main()
{   float s=0;
	int x,i=1;
	printf("enter the value of x:");
	scanf("%d",&x);
	while(i<=7)
	
	{
		printf("%d*%d+",x,i);
		s=x*i+s;
		i=i+2;
	 
	}
	printf("\b ");
	printf("%f",s);
} 
#include<stdio.h>	
void main()
{
	int r,n,s=0;
	printf("enter the  number");
	scanf("%d",&n);
	
	while(n)
	{
		r=n%10;
		s=(s*10)+r;
		n=n/10;
		
	}
printf("reverse   number:%d",s);	
	
 
} 
	
#include<stdio.h>	
void main()
{
	int r,n,s=0;
	printf("enter the  number:");
	scanf("%d",&n);
	
	while(n)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
		
	}
	
	
 
} 
#include<stdio.h>
void main()
{
	int n,r,s=0;
	printf("enter the number");
	scanf("%d",&n);
	
	while(n)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	
	printf("sum of all digit of numbers:%d",s);
 
} 

#include<stdio.h>
void main()
{
	int n,r,c=0;
	printf("enter the number");
	scanf("%d",&n);
	
	while(n)
	{
		 
		c=c+1;
		n=n/10;
	}
	
	printf("no of digits :%d",c);
 
} 
	
	
#include<stdio.h>
void main()
{
	int r,n,s=0,p=1;
	printf("enter the number :");
	scanf("%d",&n);
	while(n)
	{
		r=n%10;
		s=s+r;
		p=p*r;
		n=n/10;
		
	}
	
	if(s==p)
	{
		printf("no is perfect");
	}
	else
	{
		printf("no is not perfect");
	}
	
	
	
} 	
#include<stdio.h>
void main()
{
	int n,r,s=0,t;
	printf("enter the num");
	scanf("%d",&n);
     t=n;	
	while(n)
	{
		r=n%10;
		s=(s*10)+r;
		n=n/10;
		
	}
	
	if (t==s)
{
	printf("number is palindrome");
	
}
     else
     {
     	printf("number is not palindrome");
	 }
 
}


#include<stdio.h>
void main ()
{
	int r,n,s=0,t;
	printf("enter the number");
	scanf("%d",&n);
	t=n;
	while(n)
	{
		r=n%10;
		s=s+r*r*r;
		n=n/10;
	}
	
	if(s==t)
	{
		printf("number is armstrong");
		
	}
	else
	printf("not armstrong");
	
 
} 

#include<stdio.h>
void main()
{
	int r,n,ce=0,co=0;
	printf("enter the number");
	scanf("%d",&n);
	
	while(n)
	{
		r=n%10;
		if(r%2==0)
		{
			ce=ce+1;
		}
		else
		{
			co=co+1;
		}
		n=n/10;
	}
	
	printf("no of even digit:%d",ce);
	printf("no of odd digit:%d",co);
	
	
 
}  

#include<stdio.h>
void main()
{
	int r,n,s=0,p=0;
	printf("enter the number : ");
	scanf("%d",&n);
	

	
		 
		while(n)
		{
			r=n%2;
			s=(s*10)+r;
			n=n/2;
		}
 
		
	
	
	    while(s)
		{
			r=s%10;
			p=(p*10)+r;
			s=s/10;
		}
		
		printf("%d",p);
	
	
	
		
} 
	
#include<stdio.h>	
void main()
{
	int r,n,s=0,p=1;
	printf("Enter Number:");
	scanf("%d",&n);
	
	while(n)
	{
		r=n%2;
		s=s+(p*r);
		p=p*10;
		n=n/2;
	}
	printf("%d",s);
	
	
 
	
} 
	
#include<stdio.h>
#include<math.h>
void main()
{
	int n,r,s=0,i=0;
	printf("Enter the  Number");
	scanf("%d",&n);
	
	while(n)
	{
		r=n%10;
		s=s+(r*pow(2,i));
		i=i+1;
		n=n/10;  
	}
	printf("Decimal NO: %d",s);
	
  
	
} 	
	
#include<stdio.h>	
void main()
{
	int n,i=1;
	printf("Enter the NumberL:");
	scanf("%d",&n);
	
	
	while(i<=n)
	{
	      if(n%i==0)
		   {
		   	printf("%d,",i);
		   	
		   }
		   i=i+1;
	}
	
 printf("\b  ");
 
 
} 
	
#include<stdio.h>	
void main()
{
	int n,i=2;
	printf("enter the num:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(n%i==0)
		{
			printf("%d,",i);
			n=n/i;
		}
		else
		{
			i=i+1;
		}
	 
	}
 printf("\b  ");
	
} 	
	
 #include<stdio.h>
 void main()
 {
 	int n;
 	printf("enter number");
 	scanf("%d",&n);
 	while(n>=1)
 	
 	{
 		printf("%d,",n);
 		n=n-1;
 		
	 }
 	
  
 	
 } 	
	
#include<stdio.h>
void main()	
{   int n,i=1,s=0;
 	printf("enter number");
 	scanf("%d",&n);
	
	while(i<=n)  
	  {
	  	if(i%2!=0)
	  	{
	  	 s=s+i;
	  	  
	  		
		  }
		  i=i+1;
	  }
	  
	  
	  
	  printf("%d",s);
	  
  
} 
	
	
#include<stdio.h>	
void main()
{
	int n,i=1,s;
	printf("enter the number");
	scanf("%d",&n);
	while(i<=10)
	{  s=i*n; 
	   printf("%d*%d=%d\n",n,i,s);
		
	i=i+1;
		
	}
 
	
} 
	
#include<stdio.h>	
void main()
{
	
	int n,s=0,i=1;
	printf("enter the number:");
	scanf("%d",&n);
	while(i<=n)
	{
	    s=s+i;
		i=i+1;	
	}
	
   printf("sum :%d",s);	
	
	
	
	
} 
	 	
#include<stdio.h>	
void main()
{
    int n,r,t;
	printf("enter the no:");
	scanf("%d",&n);
	t=n%10;
	
	while(n)	
	{
		r=n%10;
		n=n/10;
		
	}
	printf("sum of last and first digit:%d",t+r);
} 
	
#include<stdio.h>	
void main()
{
	
	int n,r,count=0;
	printf("enter the number");
	scanf("%d",&n);
	
	while(n)
	{
		 count =count+1;
		n=n/10;
		
	}
	
	
printf("no of digit :%d",count);	
	
 
	
} 
	
#include<stdio.h>
void main()
{
	int n,r,s=0;
	printf("enter the number:");
	scanf("%d",&n);
	
	while(n)
	{
		r=n%10;
		s=s+r;
		n=n/10;
		
	}
	printf("sum of digit:%d",s);
 
} 
	
	
#include<stdio.h>
void main()
{
	int n,r,p=1;
	printf("enter the number:");
	scanf("%d",&n);
	
	while(n)
	{
		r=n%10;
		p=p*r;
		n=n/10;
		
	}
	printf("product of digit:%d",p);
 
} 	
	
	
#include<stdio.h>
void main()
{
	int n,r,s=0;
	printf("enter the number:");
	scanf("%d",&n);
	
	while(n)	
	{
		r=n%10;
		s=(s*10)+r;
		n=n/10;
	}
	
	printf("reverse number:%d",s);
 
} 	
	
	
#include<stdio.h>
void main()
{
	int n,r,s=0,p,t;
	printf("enter the number:");
	scanf("%d",&n);
	t=n;
	while(n)	
	{
		r=n%10;
		s=(s*10)+r;
		n=n/10;
	}
	
 if(t==s)
 {
 	
 	printf("number is palindrome");
 }
 else
 printf("not palindrome");
} 		

#include<stdio.h>
void main()
{
    
	int n,i=1;
	printf("enter the number:");
	scanf("%d",&n);
	
	while(i<=n)
	{
	  if(n%i ==0)
	  {
	  	printf("%d,",i);
	  }
	  
	  i=i+1;
	  
   
			
	}
	
  printf("\b. ");
		
} 
#include<stdio.h>	
void main()
{
	int n,p=1,i=1;
	printf("enter the number:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		p=p*i;
		i=i+1;
	}
	printf("factorial of no :%d",p);
}

#include<stdio.h>
void main()
{
	int n,r,s=0,t;
	printf("enter the number");
	scanf("%d",&n);
	t=n;
	while(n)
	
	{
		r=n%10;
		s=s+(r*r*r);
		n=n/10;
	}
	
	if(t==s)
	{
		printf("no is armstrong");
	}
	else
	{
		printf("no is not armstrong");
		
	}	
	
} 

#include<stdio.h>
void main()
{
	int n,r,s=0,p=1;
	printf("enter the number");
	scanf("%d",&n);
	
	while(n)
	{
		r=n%10;
		s=s+r;
		p=p*r;
		n=n/10;
	}
	if(s==p)
	{
		printf("no is perfect");
		
	}
	else
	{
		printf("no is not perfect");
	}
 
	
} 

#include<stdio.h>
void main()                            
{
	int n,p=1,l,ln,f,fn,x,y,t;
	printf("enter the number");
	scanf("%d",&n);
	t=n;
	l=n%10;
	ln=n/10; 
	while(n>10)  
	{
	   p=p*10; 
	   n=n/10;  
	   	
	}
	
	f=t/p;
	fn=ln%(p/10);
	 
	
	x=fn*10+f;
	 
	y=l*p+x;
	
	printf("change number :%d",y);
	
	 
} 
	
#include<stdio.h>
void main()
{
    int cd,cm,cy,bd,bm,by,d,m,y;
    printf("enter the current date");
    scanf("%d%d%d",&cd,&cm,&cy);
    
    printf("enter the birthday date");
    scanf("%d%d%d",&bd,&bm,by);
    
    if(cd<bd)
    {
    	cm=cm-1;
    	if(cm==0)
    	{
    		 cm=12;
    		 y--;
		}
    	
    	 
        if (cm==1||cm==3||cm==5||cm==7||cm==8||cm==10||cm==12)
    	{
    		cd=cd+31;
		}
    	
		else if(cm==4||cm==6||cm==9||cm==11) 
		{
			cd =cd+30;
		}
		else if((cm==2) && ((cy!=100 && cy%4==0)||cy%400==0))
    	{
    		cd=cd+29;
		}
		else if(cm==2)
		{
			cd=cd+28;
		}
		
		
		
	}
    
	d=cd-bd;
   
   	if(cm<bm)
   	{
   		cm=cm+12;
   		y--;
	}
	
	m=cm-bm;
	y=cy-by;
	printf("%d %d %d",d,m,y);
 
		
} 
	
#include<stdio.h>
#include<math.h>
void main()
{
	int m,n,t,p,i=1;
	printf("enter the number");
	scanf("%d",&n);
	 
	    xyz:
	    m= pow(10,i);
	    t=n%m;
		p=t*t;
		if(p==n)
		{
			printf("perfect square");
		}
		 else
		 {  
		 	i++;
		 	if(pow(10,i)<n) 
		 	{
		 		goto xyz;
			 }
		 	else
		 	{
		 		printf("not a perfect square");
			 }
		 	
		 	
		 	
		 }            
	
}	


#include<stdio.h>
void main()
{
	int i=1,j;
	while(i<=4)
	{
	
	
	j=2;
	while(j<=8)
	{
		printf("%d",j);
		j=j+2;
	}
	
	printf("\n");
	i=i+1;
	
	
	
	
	
    }
	
	
}

#include<stdio.h>
void main()
{
	int i=1,j;
	
	
	while(i<=4)
	{
	
	j=10;
	while(j<=50)
	{
		printf("%d ",j);
		j=j+10;
	}
	printf("\n");
	
	i++;
	}
	
	
	
	
	
	
	
} 

#include<stdio.h>
void main()
{
	int i=1,j;
	
	
	while(i<=4)
	{
	
	j=90;
	while(j>=10)
	{
		printf("%d ",j);
		j=j-20;
	}
	printf("\n");
	
	i++;
	}
	
 
	
} 


#include<stdio.h>
void main()
{
	int i=1,j;
	
	while(i<=5)
	{
      j=1;
	 while(j<=4)
	 {
	 	printf("%d ",i);
	 	j++;
	 }
	
	
	printf("\n");
	i++;
	
	
    }
 
	
} 

#include<stdio.h>
void main()
{
	int n,r,i,s=0,p,z;
	printf("enter the number:");
	scanf("%d",&n);
	z=n;
	
	while(n)
	{
		r=n%10;
		p=1;
		i=1;
		while(i<=r)
		{
			p=p*i;
			i++;
			
		}
		s=s+p;
		n=n/10;
	}
	if(s==z)
	printf("number is strong ");
	else
	{
		printf("number is not strong");
	}
} 

#include<stdio.h>
void main()
{
	int n,i=2;
	printf("enter the number:");
	scanf("%d",&n);
	
	while(i<n)
	{
	    if(n%i==0)	
	    {
	    	 
	    	break;
		}
		else
		{
			i++;
		}
	}
	if(n==i)
	printf("prime number");
	else
	printf("not a prime number");
	
} 

#include<stdio.h>
void main()
{
	 int n,r,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count0=0;
	 
	 printf("enter the number");
	 scanf("%d",&n);
	 
    while(n)
    {
    	r=n%10;
        if(r==1)
    	{
    		count1=count1+1;
    		
		}
		
		else if(r==2)
    	{
    		count2=count2+1;
    		
		}
		
		else if(r==3)
    	{
    		count3=count3+1;
    		
		}
		
		else if(r==4)
    	{
    		count4=count4+1;
    		
		}
		
		else if(r==5)
    	{
    		count5=count5+1;
    		
		}
		
		else if(r==6)
    	{
    		count6=count6+1;
    		
		}
		
		else if(r==7)
    	{
    		count7=count7+1;
    		
		}
		
		else if(r==8)
    	{
    		count8=count8+1;
    		
		}
		
		else if(r==9)
    	{
    		count9=count9+1;
    		
		}
		
		else if(r==0)
    	{
    		count0=count0+1;
    		
		}
		n=n/10;
	 
    	
    	
     }
     printf(" 0:%d\n 1:%d\n 2:%d\n 3:%d\n 4:%d\n 5:%d\n 6:%d\n 7:%d\n 8:%d\n 9:%d",count0,count1,count2,count3,count4,count5,count6,count7,count8,count9);
    
} 


#include<stdio.h>
void main()
{
	int i,j=9;
	while(j>=1)
	{
	       
	      i=1;
	     while(i<=9)
	     {
	         printf("%d",j);
	           i++ ;	
	    }
	 
	    j=j-2;
	     printf("\n");
    }
} 


#include<stdio.h>
void main ()
{
  int i,j=1;
  while(j<=9)
  {
		
	
	
	i=1;
	while(i<=j)
	{ 
	   printf(" %d",i);
		i++;
	}
	j=j+2;
	printf("\n");
   }
	
} 

#include<stdio.h>
void main()
{
    int i=5,j;
	while(i>=1)
	{
			
	
	
	
	j=1;
	while(j<=i)
	{
		printf("%d",j);
		j++;
	}
	printf("\n");
	i--;
	
   }
	
} 

#include<stdio.h>
void main()
{
	int i=1,j;
	while(i<=5)
	{
	
	
	
	
	
	j=5;
	while(j>=i)
	{
		printf("%d",j);
		j--;
	}
	
	printf("\n");
	
	i++;
    }
	
	
} 

#include<stdio.h>
void main()
{
	int i=5,j;
	while(i>=1)
	{
	 
	j=5;
	while(j>=i)
	{
		printf("%d",j);
		j--;
	}
	printf("\n");
	i--;
	
    }
	 
	
} 

#include<stdio.h>
void main()
{   
     int i=1,j;
     while(i<=5)
	{
	 
	j=1;
	while(j<=i)
	{
		printf("%d",i);
		j++;
		
	}
	i++;
	printf("\n");
    }
 
	
} 

#include<stdio.h>
void main()
{  
     int i=1,j,k=5;
     
     while(i<=5)
     {
	 
     
     
     j=1;
     while(j<=k)
     {
     	printf("%d",i);
     	j++;
	 }
	 printf("\n");
	 i++;
     k--;
     
      }
    
} 
 #include<stdio.h>
void main()
{  
     int i=1,j,k=1; 
     
     while( i<=5)
     {
	  
     j=9;
     while(j>=k)
     {
     	printf("%d",j);
     	j=j-2;
	 }
	 printf("\n");
	  i++;
      k=k+2;
   }
    
}  

#include<stdio.h>
void main()
{
	
	int i=1,j;
	while(i<=5)
	{
	 
	 j=i;
	while(j<=5)
	{
		printf("%d",j);
		j++;
	}
    
    i++;
	printf("\n");
    }
	 
} 

#include<stdio.h>
void main()
{
	
	
	int i=5,j;
	while(i>=1)
	{
	
	 
	j=i;
	while(j>=1)
	{
		printf("%d",j);
		j--;
	}
	
	i--;
	printf("\n");
   }
 
	
} 

#include<stdio.h>
void main()
{
	int i=10,j;
	while(i<=40)
	{
	 
	j=i;
	while(j<=40+i)
	{
		printf("%d ",j);
		j=j+10;
	}
	printf("\n");
	i=i+10;
    }
	
} 
#include<stdio.h>
void main()
{
	int i=90,j;
	while(i>=50)
	 
    {
 
	j=i;
	while(j>=(i-30))
	{
		printf("%d ",j);
		j=j-10;
	}
	printf("\n");
	i=i-10;
	
    }
	 
} 

#include<stdio.h>
void main()
{
	int i=1,j,k=1;
	while(i<=9)
	{
	 
	j=k;
	while(j<=i)
	{
		printf("%d",j);
		j++; 
	}
     printf("\n");
     i=i+2;
     k++;
    }
} 
#include<stdio.h>
void main()
{
	  int i=9,j,k=5;
	  while(i>=1)
	  
	  {
	   
	  j=i;
	  while(j>=k)
	  {
	  	printf("%d ",j);
	  	j--;
	  }
	  printf("\n");
	  i=i-2;
	  k--;
     }
} 
#include<stdio.h>
void main()
{
	int i,j,k=1;
	while(k<=5)
	{
	
	i=1;
	j=1;
	while(i<=5)
	{
		printf("%d",j);
		i++;
	}
	
     printf("\n");
     k++;
    }
	
	
} 

#include<stdio.h>
void main ()
{
	
	int i=1,j;
	while(i<=9)
	{
  
	j=i;
	while(j<=9)
	{
		printf("%d",j);
		j=j+2;
	}
	i=i+2;
	printf("\n");
   }
	
}  
#include<stdio.h>
void main()
{
	int i=5,j,k=9;
	while(i>=1)
	{
	
	
	j=i;
	while(j<=k)
	{
		printf("%d",j);
		j++;
	}
	i--;
	k=k-2;
	printf("\n");
	
	
    }
 
} 
#include<stdio.h>
void main()
{
	int i,j=5,k=1;
	
	while(k<=5)
	{
	 i=1;
	 
	while(i<=k)
	{
		printf("%d",j);
		i++;
	}
	
	k++;
	j--;
	printf("%\n");
	
    }
 
} 
//1
//21
//321
//4321
//54321
    
#include<stdio.h>
void main()
{
	int i=1,j;
	
	 while(i<=5)
	{
	
	 j=i;
	 
	 while(j>=1)
	 {
	 	printf("%d",j);
	 	j--;
	 }
	 i++;
	 printf("\n");
	
	
    }
 
} 
//54321
//4321
//321
//21
//1

#include<stdio.h>
void main()
{
	int i=5,j;
	while(i>=1)
	{
	 
	j=i;
	
	while(j>=1)
	{
		printf("%d",j);
		j--;
		
	}
	i--;
	printf("\n");
    }
	
} 

#include<stdio.h>
void main()
{
	int i=5,j;
	while(i>=1)
	{
	 
	
	j=5;
	while(j>=i)
	{
		printf("%d",j);
		j--;
	}
	i--;
	printf("\n");
    }
 
	
} 

#include<stdio.h>
void main()
{
	int j=5,i=5;
	while(i>=1)
	{
	 
	j=i;
	 
	while(j<=5)
	{
		printf("%d",j);
		j++;
	}
	i--;
	printf("\n");
    }
	 
	
} 
//56789
//4567
//345
//23
//1

#include<stdio.h>
void main()
{
	int i=5,j,k=9;
	while(i>=1)
	{
	
	j=i;
	while(j<=k)
	{
		printf("%d",j);
		j++;
	}
	i--;
	k=k-2;
	printf("\n");
	
	
    }
	 
} 
//          *
//         ***
//        *****
//	     *******
//	    *********
//	   ***********   	 

#include<stdio.h>
void main()
{   

     int i=1,j,sps=9;
 
	 
	while(i<=11)
	 
	{    
	      
		j=1;
		 while(j<=sps)
    {
    	printf(" ");
    	j++;
	}
	

	
	j=1;
	while(j<=i)
	{
		printf("*");
		j++;
	}
	i=i+2;
	sps--;
	printf("\n");
   }
	
 
	
} 
#include<stdio.h>
void main()
{
	
	
    int 	i=9,j,sps=1;
	while(i>=1)
	{
		j=1;
		while(j<=sps)
     	{printf(" ");
     	j++;
			 }	
	
	j=1;
	while(j<=i)
	{
		printf("*");
		j++;
	}
	i=i-2;
	sps++;
	printf("\n");
    }
	
} 
// 101010101
// 101010101
// 101010101
// 101010101
// 101010101

#include<stdio.h>
void main()
{
	int j,i;
	i=1;
	while(i<=5)
	{
	
	
	j=1;
	while(j<=9)
	{
		printf("%d",j%2);
		j++;
	
	}
	i++;
	printf("\n"); 
    }
} 

#include<stdio.h>
void main()
{
	int i=1,j=1;
	
	while(i<=5)
	{
	 
    j=i;
	while(j<=(4+i))
	{
		printf("%d",j%2);
		j++;
	}
	 
	i++;
	printf("\n");
	
   }
	
 
} 

#include<stdio.h>
void main()
{
	int i=1,j;
	while(i<=5)
	{
	 
	j=1;
	while(j<=5)
    {   if(i%2==1)
	         {
	         	printf("%d",j%2);
			 }
	    else
	          {
	          	printf("%d",!(j%2));
			  }
	    
		 
		j++;
	}
	i++;
	printf("\n");
    }
	
 
} 

#include<stdio.h>
void main()
{
	int j,i=1;
	
	while(i<=5)
    {
 
	j=1;
	while(j<=5)
	{   printf("%d",i%2);
		j++;
	}
	i++;
	printf("\n");
    }
	
	 
	
} 

#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
	 
	for(j=1;j<=5;j++)
	{
		printf("%d",j);
	}
	printf("\n");
	
    }
	
	
} 

#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
	 
	for(j=i;j<=5;j++)
	{
		printf("%d",j);
	}
	printf("\n");
	
    }
	
	
} 

#include<stdio.h>
void main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	
	{
	 
	for(j=i;j<=2*i-1;j++)
	{
		printf("%d",j);
	}
	
	printf("\n");
 
   }
 	
} 

#include<stdio.h>
void main()
{
	int i=1,j;
	while(i<=5)
	{   
	     j=1;
	     while(j<=5)
	     {
	     	printf("1");
	     	j++;
		 }
		i++;
		printf("\n");
	}
} 
#include<stdio.h>
void main()
{
	int i,j;
	i=1;
	while(i<=5)
	{
	
	
	j=1;
	while(j<=5)
	{
		if(i%2==1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		j++;
		
	}
	i++;
	printf("\n");
	
   }
 
	
} 
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	
	{
	
	
	for(j=2;j<=6;j++)
	{
		printf("%d",j%2);
	}
	
	printf("\n");
    }
 
} 
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
	 
	 for(j=i;j<=4+i;j++)
	 {
	 	printf("%d",j%2);
	 }
	
	
	printf("\n");
    }
 
} 

#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
	
	
	
	
	for(j=1;j<=5;j++)
	{
	     printf("%d",i);	
	}
	
	printf("\n");
	
    } 
 
}  
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=5;j++)
	{
		printf("%d",j);
	}
	printf("\n");
    }
 
} 
 
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
	
	
	for(j=i;j<=4+i;j++)
	{
		printf("%d ",j);
	}
	printf("\n");
	
   }
 	
} 
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=21;i=i+5)
	{ 
	for(j=i;j<=4+i;j++)
	{
		printf("%d ",j);
	}
	printf("\n");
    }
 	
}  
#include<stdio.h>
void main()
{ 
	int i,j;
	for(i=1;i<=5;i++)
	{ 
	for(j=i;j<=5;j++)
	{
		printf("%d",j);
	}
	printf("\n");
   }
 
} 

#include<stdio.h>
void main()
{       
     int i,j;
	 for(i=1;i<=5;i++)
	 {
	  
	 for(j=1;j<=i;j++)
	 {
	 	printf("%d",i);
	 }
	 
	  printf("\n");
     }
  	  
} 

#include<stdio.h>
void main()
{    
    
	int i,j;
	for(i=5;i>=1;i--)
	{ 
	for(j=1;j<=i;j++)
	{
		printf("%d",i);
	}
	
	printf("\n");
    }
	
} 
#include<stdio.h>
void main()
{
	int i,j,k=1 ;
	for(i=5;i>=1;i--)
	{
	
	
	
	for(j=1;j<=k;j++)
	{
		printf("%d",i);
	}
	k++;
	printf("\n");
} 
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=i;j++)
	{
		printf("%d",j);
	}
	printf("\n");
    }
	
} 
	
#include<stdio.h>
void main()   
{
	int i,j;
	for(i=5;i>=1;i--)
	{ 
	for(j=1;j<=i;j++)
	{
        printf("%d",j);
	}
	
	printf("\n");
    }
 	
}  
#include<stdio.h>	
void main()    
{
	int i,j,k=5;
	for(i=1;i<=5;i++)
	{
	
	for(j=1;j<=k;j++)
	{
		printf("%d",i);
	}
	printf("\n");
	k--;
    }
 
}  
   
#include<stdio.h>
void main()
{
	
	int i,j;
	
	for(i=1;i<=5;i++)
	{
	
	
	for(j=i;j>=1;j--)
	{n
		printf("%d",j);
	}
	
	printf("\n");
    }
 
	
}   

#include<stdio.h>
void main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
	
	
	
	for(j=i;j>=1;j--)
	{
		printf("%d",j);
	}
	
	printf("\n");
    }
 
} 
#include<stdio.h>
void main()
{ 
	int i,j;
	for(i=1;i<=5;i++)
	{ 
	for(j=5;j>=i;j--)
	{
		printf("%d",j);
	}
	printf("\n");
    }
 
} 
#include<stdio.h>
void main()
{
	
	int i,j;
	
	for(i=5;i>=1;i--)
	{ 
	
	for(j=i;j<=5;j++)
	{
		printf("%d",j);
	}
	printf("\n");
     }
	
} 

#include<stdio.h>
void main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
	
	for(j=i;j<=2*i-1;j++)
	{
		printf("%d",j);
	}
	printf("\n");
    }
 
} 

#include<stdio.h>
void main()
{
    int i,j;
	for(i=1;i<=5;i++)
	{
	
	
	for(j=i;j<=5;j++)
	{
		printf("%d",j);
	}
	printf("\n");
    }
	
 
} 

#include<stdio.h>
void main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{ 
	for(j=1;j<=i;j++)
	{
		printf("%d",j%2);
	}
	printf("\n");
	
    }
 
} 

#include<stdio.h>
void main()
{
	 int i,j;
	 
	 for(i=1;i<=5;i++)
	 { 
	 for(j=1;j<=i;j++)
	 {
	 	if(i%2==1)
		 {
		 	printf("1");
		 }
		 else
		  {
		  	printf("0");
		  }
	 }
 	 printf("\n");
	 
     }
	 
} 
	
#include<stdio.h>	
void main()	
 {
 	int i,j;
 	
 	for(i=1;i<=5;i++)
 	{
	 
 	for(j=1;j<=i*2-1;j++)
 	{
 		printf("%d",j);
	 }
 	printf("\n");
 	
    }
  
 }    

#include<stdio.h>
void main()
{   
    int j,i;
	j=1;
    while(j<=5)	
	{
	    if(j%2==1)
		{
			for(i=1;i<=2*j-1;i=i+2)
			{
				printf("%d",i);
			}
		}
		else
		{
			for(i=2;i<=2*j;i=i+2)
			{
				printf("%d",i);
			}
		}
		j++;
		printf("\n");	
	} 
 	
} 


#include<stdio.h>
void main()
{
	int n,i,j;
	printf("enter the number upto you want a prime number");
	scanf("%d",&n);
	printf("prime number are:");
	
	for(i=1;i<=n;i++)
	{
		j=2;
		while(j<i)
		{
			if(i%j==0)
			{
				break;
			}
			j++;
			
		}
		if(i==j)
		{
			printf("%d,",i);
		}
	 	
	}
	
}  
#include<stdio.h>
void main()
{   int n,r,s=0,t;
	printf("enter the number:");
	scanf("%d",&n);
	t=n;
	while(n)
	{
		r=n%10;
		s=s+r*r*r;
		n=n/10;
		
   }
   if(t==s)
   {
   
	printf("Armstrong number");
	
    }
    else
    {
    	printf("Not Armstrong number");
	}
	
} 

 
#include<stdio.h>
void main()
{   int i,t,n,ch;
  	do
  	{
  	     printf("enter the number:");
		 scanf("%d",&n);
		 i=1;
		 while(i<=10)
		 {
		 
	     t=n*i;
	     printf("%dx%d=%d",n,i,t);
	     i++;
	     printf("\n");
	     }
	     printf("do you want another tableto print 1yes 2no:");
	     scanf("%d",&ch);
	     
	}while(ch==1);
 
} 
#include<stdio.h>
void main()
{   int a,n,i;
    do
    {
	
	printf("main menu \n 1]even no \n 2]odd no \n 3]factorial  \n 4]exist\n");
	printf("enter your choice :");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
	    i=2;
	    while(i<=10)
	    {
	    printf("%d,",i);
	    i=i+2;
	    }
	    printf("\n");
	    break;
	    
	    case 2:
	    i=1;
	    while(i<=9)
	    {
	    	printf("%d,",i);
	    	i=i+2;
		}
		break;
	
		
		
		case 3:
		 
	     printf("enter the number:");
	     scanf("%d",&n);
     	i=1; 
	     while(n>1)
	    {
		   i=i*n;
		    n--;
       	}
	     printf("factorial :%d",i);
	
		case 4:
		printf("good bye");
		break;
		
		default:
		printf("invalid option");
		
		
	}
	printf("\n");
    }while(a!=4);
}
#include<stdio.h>
void main() 
{
    int n,r,s,t,p,i;
    printf("enter the number:");
    scanf("%d",&t);
    i=11;
    while(i<=t)
    {
	
    s=0;
    p=1;
    n=i;
    while(n)
    {  
        r=n%10;
    	s=s+r;
    	p=p*r;
    	n=n/10;
	}
	if(s==p)
	{
		printf("%d",n);
		
	}
	i++;
    }
} 
#include<stdio.h>
void main()
{
	int x,y,a;
	do
	{
	
	printf("enter the value of x and y:");
	scanf("%d %d",&x,&y);
	printf("main menu \n 1] addition \n 2] subtraction \n 3] multiplication \n 4] division \n");
	printf("enter the value of a");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
		printf("sum of two number:%d",x+y);
		break;
		
		case 2:
		printf("subtraction of two number:%d",x-y);
		break;
		
		case 3:
		printf("multiplication of two number:%d",x*y);
		break;
		
		case 4:
		printf("division of two number :%d",x/y);
		break;
		
		case 5:
		printf("good bye");
		break;
		
		default:
		printf("wrong option");
		break;
	}
	printf("\n");
	printf("do you want to continue 1yes/2no");
	scanf("%d",&a);

	}while(a==1);
	
} 
#include<stdio.h>
void main()
{
	char x;
	printf("enter the character:");
	scanf("%c",&x);
	
	if(x>='A' && x<='Z')
	{
		printf("upper case");
	}
	
    else if(x>='a' && x<='z')
    {
    	printf("lower case");
	}
	else if (x>='0' && x<='9')
	{
		printf("digit");
	}
	else
	{
		printf("special character");
	}
	
} 

#include<stdio.h>
void main()
{
	char x;
	printf("enter the character:");
	scanf("%c",&x);
	+
	if(x>=65 && x<=90)
	{
		printf("upper case");
	}
	else if (x>=97 && x<=122)
	{
		printf("lower case");
	}
	else if(x>=48 && x<=57)
	{
		printf("digit");
	}
	else
	{
		printf("special character");
	}
} 
#include<stdio.h>
void main()
{
	char x;
	printf("enter the lowercase character:");
	scanf("%c",&x);
	if(x>='a' && x<='z')
	{
		x=x-32;
	}
	printf("uppercase character:%c",x);
	
} 

#include<stdio.h>
void main()
{
	char x;
	printf("enter the character:");
	scanf("%c",&x);
	if((x>='A' && x<='Z')||(x>='a' && x<='z'))
	{
	
	if(x=='a' ||x=='e' ||x=='i' ||x=='o' ||x=='u'||x=='A' ||x=='E' ||x=='I' ||x=='O' ||x=='U')
	{
		printf("this is a vowel.....");
	}
 
	else
	{
		printf("consonant..."); 
	}
    }
   else
   {
   	printf("not a consonant");
   }
} 

#include<stdio.h>
void main()
{   int i;
    char x; 
 
    for(i=1;i<=5;i++)
    {
	
	   for(x='A';x<='E';x++)
	   {
	   	printf("%c ",x);
	   }
	   printf("\n");
    }
	   
} 
#include<stdio.h>
void main()
{   
    int i;
    char x;
   
	for(i=1;i<=5;i++)
	{
	
	
	for(x='a';x<='a'+2*(i-1);x++)
	{
		printf("%c",x);
	}
	printf("\n");
    }
}
#include<stdio.h>
void main()
{   char x,i;
	for(i='E';i>='A';i--)
	{
	
	
	for(x='A';x<=i;x++)
	{
		printf("%c",x);
	}
	printf("\n");
    }
	
} 
 
#include<stdio.h>
void main()
{
	char i,j;
	
	for(i='A';i<='E';i++)
	{
	
	
	for(j='A';j<=i;j++)
	{
		printf("%c",i);
	}
	printf("\n");
   }
	
} 

#include<stdio.h>
void main()
{
	
	int i,j;
	for(i=1;i<=5;i++)
	{
	
	for(j=1;j<=5;j++)
	{
		printf("*");
	}
	printf("\n");
    }
} 

#include<stdio.h>
void main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
	
	for(j=1;j<=5;j++)
	{  
	    if(i==1||i==5)
	    {
		   printf("*");
	    }
	    else
	    {
	    	if(j==1||j==5)
	    	{
	    		printf("*");
			}
			else
			{
				printf(" ");
			}
		}
	}
	printf("\n");
    }
	
} 

#include<stdio.h>
void main()
{   
    int i,j; 

	for(i=1;i<=10;i++)
	{
	
	
	for(j=1;j<=10;j++)
	{
		if(i==1||i==10)
		{printf("*");
		}
		else if(i==2||i==9)
		{
			if(j==1||j==2||j==3||j==4||j==7||j==8||j==9||j==10)
			{printf("*");
			}
			else
			{printf(" ");
			}
		}
		else if(i==3||i==8)
		{
			if(j==1||j==2||j==3|| j==8||j==9||j==10)
			{printf("*");
			}
			else
			{printf(" ");
			}
		}
		else if(i==4||i==7)
		{
			if(j==1||j==2||j==9||j==10)
			{printf("*");
			}
			else
			{printf(" ");
			}
		}
		else if(i==5||i==6)
		{
			if(j==1 ||j==10)
			{printf("*");
			}
			else
			{printf(" ");
			}
		}
		
	}
	printf("\n");
    }
 	
} 

#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{ 
	for(j=1;j<=i;j++)
	{printf("*");
	}
	printf("\n");
    }
    
    for(i=4;i>=1;i--)
	{ 
	for(j=1;j<=i;j++)
	{printf("*");
	}
	printf("\n");
    }
    
} 

#include<stdio.h>
void main()
{
	int i,j,sps=0;
	
	for(i=5;i>=1;i--)
	{
	
	for(j=1;j<=i;j++)
	{printf("*");
	}
	for(j=1;j<=sps;j++)
	{printf(" ");
	}
	
	for(j=1;j<=i;j++)
	{printf("*");
	}
	printf("\n");
	sps=sps+2;
    }
    //new question
    sps=8;
    for(i=1;i<=5;i++)
	{
	
	for(j=1;j<=i;j++)
	{printf("*");
	}
	for(j=1;j<=sps;j++)
	{printf(" ");
	}
	
	for(j=1;j<=i;j++)
	{printf("*");
	}
	printf("\n");
	sps=sps-2;
    }
   
} 


#include<stdio.h>
void main()
{   
     int i,j;
     
	for(i=1;i<=5;i++)
	{
	
	
	for(j=1;j<=i;j++)
	{printf("%d",j);
	}
	
	for(j=j-2;j>=1;j--)
	{printf("%d",j);
	}
	
	
	printf("\n");
    }
} 

#include<stdio.h>
void main()
{
	char x;
	
	printf("enter the character:");
	scanf("%c",&x);
	
	if((x>='a' && x<='z')||(x>='A' && x<='Z'))
	{
	
	switch(x)
	{
		case 'a':
		printf("vowel");
		break;
		
		case 'A':
		printf("vowel");
		break;
		
		case 'e':
		printf("vowel");
		break;
		
		case 'E':
		printf("vowel");
		break;
		
		case 'i':
		printf("vowel");
		break;
		
		case 'I':
		printf("vowel");
		break;
		
		case 'o':
		printf("vowel");
		break;
		
		case 'O':
		printf("vowel");
		break;
		
		case 'u':
		printf("vowel");
		break;
	 
		
		case 'U':
		printf("vowel");
		break;
		
		 default :
		 printf("consonent");
		 break;
		 
	}
    }
	else
	{printf("Not a Alphabet");
	}
 
} 
#include<stdio.h>
void main()
{   int t;
	printf("enter the day no :");
	scanf("%d",&t);
	
	switch(t)
	{
		case 1:
		printf("monday");
		break;
			
		case 2:
		printf("tuesday");
		break;
		
		case 3:
		printf("wednesday");
		break;
			
		case 4:
		printf("thursday");
		break;
			
		case 5:
		printf("friday");
		break;
			
		case 6:
		printf("saturday");
		
	}
	
} 
//to print totol no day in a month
#include<stdio.h>
void main()
{   int m;
	printf("enter the month:");
	scanf("%d",&m);
	
	switch(m)
	{
		case 1:
		printf("31 days");
		break;
		
		case 2:
		printf("28 days");
		break;
		
		case 3:
		printf("31 days");
		break;
		
		case 4:
		printf("30 days");
		break;
		
		case 5:
		printf("31 days");
		break;
		
		case 6:
		printf("30 days");
		break;
		
		case 7:
		printf("31 days");
		break;
		
		case 8:
		printf("31 days");
		break;
		
		case 9:
		printf("30 days");
		break;
		
		case 10:
		printf("31 days");
		break;
		
		case 11:
		printf("30 days");
		break;
		
		case 12:
		printf("31 days");
	}
} 

//To find maximum number between two number
#include<stdio.h>
void main()
{
	int x,y;
	printf("enter the number x:");
	scanf("%d",&x);
	
	printf("enter the number y:");
	scanf("%d",&y);
	
	switch(x>y)
	{
		case 0:
		printf("maximum value:%d",y);
		
		case 1:
		printf("maximum value:%d",x);
	}
}

#include<stdio.h>
void main()
{   
    int n;
	printf("enter the number");
	scanf("%d",&n);
	
	switch(n%2==0)
	{
		case 1:
		printf("number is even");
		
		case 0:
		printf("number is odd");
	}
} 

#include<stdio.h>
void main()
{  
    int i,j,k=9,sps=5;
    
    for(i=1;i<=5;i++)
    {   
        
        for(j=1;j<=sps;j++)
        {printf(" ");
		}
        
         
    	for(j=1;j<=k;j++)
    	{
    		if((i==1)||j==1||(j==k))
    		{
    			printf("*");
			}
			else
			{printf(" ");
			}
		}
		k=k-2;
		sps++;
		printf("\n");
	}

   	
} 
#include<stdio.h>
void main()	
{
	int i,j;
	for(i=1;i<=5;i++)
	{
	
	
	for(j=1;j<=i;j++)
	{printf("*");
	}
	printf("\n");
    }
    
    for(i=4;i>=1;i--)
	{
	
	
	for(j=1;j<=i;j++)
	{printf("*");
	}
	printf("\n");
    }
  
}  
 
#include<stdio.h>
void main()
{
	
	int i,j,sps=4;
	for(i=5;i>=1;i--)
	{
	
	for(j=1;j<=sps;j++)
	{printf(" ");
	}	
		
		
	
	
	for(j=1;j<=i;j++)
	{printf("*");
	}
	sps=sps-1;
	printf("\n");
    }
    sps=1;
    for(i=2;i<=5;i++)
	{
	
	for(j=1;j<=sps;j++)
	{printf(" ");
	}	
		
		
	
	
	for(j=1;j<=i;j++)
	{printf("*");
	}
	sps=sps+1;
	printf("\n");
    }
  
	
} 
	
#include<stdio.h>
void main()
{
	int i,j,n;
	
	printf("entert the odd side of cube in which you  want to  show plus sign:");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++)
	{
	
	
	for(j=1;j<=n;j++)
	{
		  if(i==j||j==n+1-i)
		 {printf("*");
		 }
		 else
		 {printf(" ");
		 }
		
	}
	printf("\n");
    }
	
	
}   	
	
	
#include<stdio.h>
void main()
{
	
    int i,j,sps=2,sps1=5,sps2=1;	
	
	
	for(i=5;i<=9;i=i+2)
	{
		
	for(j=1;j<=sps;j++)
	{printf(" ");
	}	
	
	
	for(j=1;j<=i;j++)
	{printf("*");
	}
	
	
	for(j=1;j<=sps1;j++)
    {printf(" ");
	}
		
	
	for(j=1;j<=i;j++)
	{printf("*");
	}
	
	
	sps1=sps1-2;
	sps--;
	printf("\n");
	
 
	
   }
   printf("*****sahilsahu*****\n");
   
   
   for(i=17;i>=1;i=i-2)
   {
   for(j=1;j<=sps2;j++)
   {printf(" ");
   }
   
   for(j=1;j<=i;j++)
   {printf("*");
   }
   
   sps2++;
   printf("\n");
  }
   
	
}  	

	
#include<stdio.h>
void main()
{   int i,j,k=0;
	for(i=1;i<=5;i++)
    {
    	
    	for(j=i;j<=5;j++)
    	{
    		 printf("%d",j);
		}
		
		for(j=k;j>=1;j--)
		{printf("%d",j);
		}
		
		k++;
	printf("\n");
	}
} 
	
#include<stdio.h>
void main()
{
	int i,j,k=0;
	
	
	for(i=2;i<=10;i=i+2)
	{
	
	
	for(j=2;j<=i;j=j+2)
	{printf("%d",j);
	}
	
	for(j=k;j>=2;j=j-2)
	{printf("%d",j);
	}
	
	
    k=k+2;	
	printf("\n");
    }
 
} 	
	
#include<stdio.h>
void main()
{
	int i,j,k=0;
	
	
	for(i=1;i<=5;i++)
	{
	
	
	
	for(j=1;j<=i;j++)
	{printf("%d",j);
	}
	
	for(j=k;j>=1;j--)
	{printf("%d",j);
	}
	
	
	
	k++;
	printf("\n");
    }
 
} 	
	
#include<stdio.h>
void main()
{
	int x[10],n,i,count=0;
	
	for(i=0;i<=9;i++)
	{printf("enter the value x[%d]:",i);
	scanf("%d",& x[i]);
	}
	
	printf("enter number you want to search:");
	scanf("%d",&n);
	
	for(i=0;i<=9;i++)
	{
		if(x[i]==n)
		{
			 count =count+1;
		}
		
		
	}
	printf("No of value:%d",count);
 
} 	
#include<stdio.h>
void main()
{
	int x[10],i,fi=0,se=0,th=0,fa=0;
	
	for(i=0;i<=9;i++)
	{printf("enter the number x[%d]:",i);
	scanf("%d",&x[i]);
	}
	
	for(i=0;i<=9;i++)
	{
		if(x[i]>=60 && x[i]<=100)
		{fi=fi+1;
		}
		
		else if(x[i]>=45 && x[i]<=59)
		{se=se+1;
		}
		
		else if(x[i]>=33 && x[i]<=44)
		{ th=th+1;
		}
		
		else if(x[i]>=0 && x[i]<=32)
		{ fa=fa+1;
		}
		
	}
	
	
	printf("no of student lies in first division:%d \n",fi);
	printf("no of student lies in second division:%d \n",se);
	printf("no of student lies in third division:%d \n",th);
	printf("no of student lies in failure division:%d \n",fa);
	
} 		
	
	
	
#include<stdio.h>
void main()
{
	int x[10],y[10],z[10],i;
	
	for(i=0;i<=9;i++)
	{printf("x[%d]:",i);
	scanf("%d",&x[i]);
	}
	for(i=0;i<=9;i++)
	{printf("y[%d]:",i);
	scanf("%d",&y[i]);
	} 
	
	for(i=0;i<=9;i++)
	{ z[i]=x[i]+y[i];
	printf("z[%d]:%d\n",i,z[i]);
	}  
	 
	 
	 
} 	
	
#include<stdio.h>
void main()
{
	int x[10],y[10],i;
	
	for(i=0;i<=9;i++)
	{printf("x[%d]:",i);
	scanf("%d",&x[i]);
	}
	
	for(i=0;i<=9;i++)
	{ y[i]=x[9-i];
	}
	
	for(i=0;i<=9;i++)
	{
		printf("y[%d]:%d\n",i,y[i]);
	}
	
}  	
	
	
#include<stdio.h>
void main()
{
	int x[5],y[3],z[8],i;
	
	for(i=0;i<=4;i++)
	{printf("x[%d]:",i);
	scanf("%d",&x[i]);
	}
	for(i=0;i<=2;i++)
	{printf("y[%d]:",i);
	scanf("%d",&y[i]);
	} 
	
	for(i=0;i<=4;i++)
	{ z[i]=x[i];
	}  
	 
	 
	for(i=5;i<=7;i++)
	{ z[i]=y[i-5];
	}
	
	for(i=0;i<=7;i++)
	{  printf("z[%d]:%d\n",i,z[i]);
	}
	  
	 
} 
	
	
#include<stdio.h>
void main()
{
    int x[5],i,max;
    for(i=0;i<=4;i++)
    {printf("x[%d]:",i);
    scanf("%d",&x[i]);
	}
	max=x[0];
	for(i=1;i<=4;i++)
	{
		if(x[i]>x[0])
		{
			max=x[i];
		}
	}
	printf("maximum value:%d",max);
 
} 
	
	
#include<stdio.h>	
void main()
{
	int x[10],n,p,i;
	for(i=0;i<=8;i++)
	{printf("enter value x[%d]:",i);
	scanf("%d",&x[i]);
	}
	printf("enter the value you want to input");
	scanf("%d",&n);
	
	printf("input position:");
	scanf("%d",&p);
	
	for(i=8;i>=p;i--)
	{x[i+1]=x[i];
	}
	x[p]=n;
	for(i=0;i<=9;i++)
	{printf("x[%d]:%d\n",i,x[i]);
	}
	
} 
	
	
#include<stdio.h>
void main()
{
	int x[10],i,p;
	for(i=0;i<=9;i++)
	{printf("x[%d]:",i);
	scanf("%d",&x[i]);
	}
	printf("enter position");
	scanf("%d",&p);
	
	for(i=p;i<=8;i++)
	{x[i]=x[i+1];
	}
	
	for(i=0;i<=8;i++)
	{
		printf("x[%d]:%d\n",i,x[i]);
	}
 
} 		
	
#include<stdio.h>
void main()
{
    int n,r,i,j;
    int a[10];
    printf("enter the number:");
    scanf("%d",&n);
    i=0;
	while(n)
	{
		r=n%2;
		n=n/2;
		a[i]=r;
		i++;
	  	
	}
	  for(j=i-1;j>=0;j--)
	{
	     printf("%d",a[j]);
	}
	
}  
#include<stdio.h>
#include<math.h>
void main()
{
	int n,s=0,i,r;
	printf("enter the binary number");
	scanf("%d",&n);
	i=0;
	while(n)
	{
		r=n%10;
		n=n/10;
		s=s+r*pow(2,i);
		i++;
	}
	printf("%d",s);
 	
}*/  	

#include<stdio.h>
void main()
{
	int t1=0,t2=1,nt,n,i;
	 
	
	printf("enter number");
	scanf("%d",&n);
	printf("%d %d",t1,t2);
	nt=t1+t2;
	
	for(i=3;i<=n;i++)
	{
	    printf("%d",nt);
	    t2=nt;
	    nt=nt+t2;
	
	}
	
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	 
