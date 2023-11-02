//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	FILE *fp=NULL;
////	char sh='a';
////	 int ans = 1;
//	char str[50];
//	fp=fopen("abc.txt","a");
//	if(fp==NULL)
//	{
//		printf("error");
//		exit(1);
//	}
     
//        fputc(sh,fp);
//        
//        fputs(ch,fp);
//         
//		fprintf(fp,"%d %s",ans,ch);
//		int temp;
//		char sahil[50];
//		fgets(temp,fp);
//		fgets(sahil,fp);
//		printf("value of temp variable:%d\n",temp);
//		printf("string : %s\n",sahil);
     
//        while(!feof(fp))
//        {
//        	fgets(ch,5,fp);
//        	printf("%s",ch);
//		}
		
//		printf("Enter name you want to append");
//		gets(str);
//		fprintf(fp,"%s",str);
//		printf("successfully append");
//		fclose(fp);
//	
//}
#include<stdio.h>
#include<stdlib.h>
void  main()
{
	FILE *fp=NULL;
	char str[30];
	fp=fopen("abc.txt","r+");
	if(fp==NULL)
	{
		printf("error");
		exit(1);
	}
	
	while(!feof(fp))
	{
		fgets(str,5,fp);
		printf("%s",str);
		
	}
	fputs("jenny",fp);
	fclose(fp);
	
}













