/*#include<stdio.h>
void main()
{
	int t1=0,t2=1,nt,n,i;
	 
	
	printf("enter number");
	scanf("%d",&n);
	printf("%d,%d",t1,t2);
	nt=t1+t2;
	
	for(i=3;i<=n;i++)
	{
	    printf("%d,",nt);
	    t2=nt;
	    nt=nt+t2;
	
	}
	
}	*/
	
#include <stdio.h>
int main() {

  int i, n;

  // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  // print 3rd to nth terms
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}	
	
	
	
	
