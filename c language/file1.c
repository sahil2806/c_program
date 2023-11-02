//#include<stdio.h>
//#projma pack(1)
//typedef struct information
//{
//        char name[30] ;
//		int rollno;
//		int age;
//		char address[30];
//}inf;
//int main()
//{
//     
//     inf  x;
//     inf *it=&x;
//     int i;
//     
//     	 printf("enter a name :");
//     	 scanf("%s",&(*it).name);
//     	 printf("enter rollno:");
//     	 scanf("%d",&(*it).rollno);
//     	 printf("enter age:");
//     	 scanf("%d",&(*it).age);
//     	 printf("enter address:");
//     	 scanf("%s",&(*it).address);
//     	 printf("\n");
//	 
//	 
//	  
//     	 printf("enter a name :%s\n",x.name);
//     	 printf("enter rollno:%d\n",x.rollno);
//     	 printf("enter age:%d\n",x.age);
//     	 printf("enter address: %s\n",x.address);
//     	 
//     	 printf("\n");
//	  
//}
//
////struct book input()
////{
////	struct book b;
////	printf("enter a bookid:");
////	scanf("%d",&b.bookid);
////	printf("enter a title:");
////	scanf("%s",b.title);
////	printf("enter a price:");
////	scanf("%f",&b.price);
////	return b;
////}
////void display(struct book b)
////{
////	printf("book id:%d \t title : %s \t price :%f",b.bookid,b.title,b.price);
////}

#include<stdio.h>
int main()
{
    int i;
	FILE *fp;
	char s[100];
	fp=fopen("f1.txt","w");
	if(fp==NULL){
		printf("file cannot open");
		exit(1);
	}	     
	
	printf("enter a string");
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		fputc(s[i],fp);
		fclose(fp);
		getch();
	}
}

































