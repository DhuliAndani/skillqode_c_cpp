/*#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("file1.txt","w+");
	
	fprintf(fp,"Welcome to skill qode for decode your skill \n");
	fputs("you are entering to learn c language now...\n",fp);
	
	fclose(fp);
}*/



#include<stdio.h>
int main()
{
	FILE *fp;
	char str[255];
	fp=fopen("file1.txt","a");
	while(fscanf(fp,"%s",str)!=EOF)
	{
		printf("%s",str);
	}
	
	//fprintf(fp,"Welcome to skill qode for decode your skill \n");
	//fputs("you are entering to learn c language now...\n",fp);
	
	fclose(fp);
}