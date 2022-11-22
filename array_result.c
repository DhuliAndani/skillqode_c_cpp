#include<stdio.h>
int main()
{
	int rollno[5];
	int i,d1[5],d2[5],d3[5],total[5];
	float per[5];
	char grade[5];
	for(i=0;i<5;i++)
	{
		printf("Enter Roll No :");
		scanf("%d",&rollno[i]);
		printf("\t Enter D1 :");
		scanf("%d",&d1[i]);
		printf("\t Enter D2 :");
		scanf("%d",&d2[i]);
		printf("\t Enter D3 :");
		scanf("%d",&d3[i]);
	}
	printf("RollNo \td1 \td2 \td3 \ttotal \tper \tgrade");
	for(i=0;i<5;i++)
	{
		total[i]=d1[i]+d2[i]+d3[i];
		per[i]=total[i]/3;
		

		
		if(per[i]>=75)
		{
			grade[i]='A';
		}
		else if(per[i]>65 && per[i]<75)
		{
			grade[i]='B';
		}
		else if(per[i]>50 && per[i]<65)
		{
			grade[i]='C';
		}
		else if(per[i]>35 && per[i]<50)
		{
			grade[i]='D';
		}
		else
		{
			grade[i]='F';
		}
		printf("\n%d \t%d \t%d \t%d \t%d \t%.2f \t%c",rollno[i],d1[i],d2[i],d3[i],total[i],per[i],grade[i]);
	}
	printf("\n");
}
