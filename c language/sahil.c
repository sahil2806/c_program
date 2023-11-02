#include<stdio.h>
void movie(  )
{   
    int d,H,M,m,select;
    char place[100];
    printf("\n Select language \n");    
    printf("\n 1. Hindi \n");
    printf("\n 2. English  \n");
    printf("\n 3. Tamil  \n");
    printf("\n 4. Telugu \n");
	printf("\n Enter a date :");
	scanf("%d",&d);
	printf("\n Enter a month :");
	scanf("%d",&m);
	printf("\n Enter a time duration   in (hour)  :");
	scanf("%d",&H);
	printf("\n Enter a time  duration  in (minute)  :");
	scanf("%d",&M);
	 

	
	printf("These movies are available on the basis of your choice\n");
	printf("1.\n PATHAN \n");
	printf("2.\n RRR \n");
	printf("3.\n ANT MAN AND THE WASP \n");
	printf("4.\n DANGAL \n");
	printf("5.\n 3 IDIOTS \n");
	printf(" select any sport by clicking  the number\n");
	int n;
	scanf("%d",&n);
	
	switch(n)
	{
		case 1: 
		{   
		    printf("\n select any CINEMA HALL NEAR TO YOU \n");
		    printf("\n 1. NOVA CINEMAZ  \n");
		    printf("\n 2. IMPERIAL CINEMA  \n");
		    printf("\n 3. DELITE CINEMA ");
		    scanf("%d",&select);
			 
			break;
		}
		
		case 2: 
		{
			printf("\n select any CINEMA HALL NEAR TO YOU \n");
		    printf("\n 1. NOVA CINEMAZ  \n");
		    printf("\n 2. IMPERIAL CINEMA  \n");
		    printf("\n 3. DELITE CINEMA ");
		    scanf("%d",&select);
			 
			 
			break;
		}
		
		case 3: 
		{
			printf("\n select any CINEMA HALL NEAR TO YOU \n");
		    printf("\n 1. NOVA CINEMAZ  \n");
		    printf("\n 2. IMPERIAL CINEMA  \n");
		    printf("\n 3. DELITE CINEMA ");
		    scanf("%d",&select);
			 
			 
			break;
		}
		
		case 4: 
		{
			
			printf("\n select any CINEMA HALL NEAR TO YOU \n");
		    printf("\n 1. NOVA CINEMAZ  \n");
		    printf("\n 2. IMPERIAL CINEMA  \n");
		    printf("\n 3. DELITE CINEMA ");
		    scanf("%d",&select);
			 
			break;
		}
		
		case 5: 
		{
			
			printf("\n select any CINEMA HALL NEAR TO YOU \n");
		    printf("\n 1. NOVA CINEMAZ  \n");
		    printf("\n 2. IMPERIAL CINEMA  \n");
		    printf("\n 3. DELITE CINEMA ");
		    scanf("%d",&select);
		     
			 
			 
			break;
		}
	}
	printf("if you want to comfirm a ticket press 1  other wise 2 : ");
	int temp;
	scanf("%d",&temp);
	if(temp==1)
	{
		 
	}
	 else
	 {
	 	 
	 }
}
int main()
{
    movie();
}
