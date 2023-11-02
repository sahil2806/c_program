#include<stdio.h>
int main()
{ 
     void input(int*);
     void display(int*);
     void sort(int*);
	 int arr[5];
	 input(arr);//input of array element
	 printf("\n");
	 display(arr);//display of array of element
	 printf("\n");
	 sort(arr);//sorting of array
	 display(arr); 
	 printf("\n");
	  	
}
void input(int *p)
{
	printf("enter a value:");
	int i;
	
	for(i=0;i<=3;i++)
	{
		scanf("%d ",(p+i));
	}
}
void display(int *p)
{
	int i;
	printf("display a value:");
	for(i=0;i<5;i++)
	{
		printf("%d ",*(p+i));
	}
}
void sort(int *p)
{
	int i,j;
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3-i;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				int t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=t;
			}
		}
	}
}
