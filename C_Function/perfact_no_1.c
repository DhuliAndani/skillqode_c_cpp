
#include <stdio.h>
int isPerfect(int num);
void printPerfect(int start, int end);
int main()
{
    	int start, end;
  	printf("Enter lower perfect numbers: ");
    	scanf("%d", &start);
    	printf("Enter upper perfect numbers: ");
    	scanf("%d", &end);
    	printf("All perfect numbers %d to %d are: \n", start, end);
    	printPerfect(start, end);
    	return 0;
}
int isPerfect(int num)
{
    int i, sum;
    sum = 0;
    for(i=1; i<num; i++)
    {
        if(num % i==0)
        {
            sum +=i;
        }
    }
    if(sum == num)
        return 1;
    else
        return 0;
}
void printPerfect(int start, int end)
{
	while(start <= end)
    	{
        	if(isPerfect(start))
        	{
            		printf("%d, ",start);
		}
		 start++;
        }

       
      
}















/*#include<stdio.h>
int perfect(int num)
{
	int i,sum=0;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		sum+=i;
	}
	if(sum==num)
	return 1;
	else
	return 0;
}
int main()
{
	int num;
	printf("\n enter integer num:");
	scanf("%d",&num);
	if(perfect(num))
		printf("%d is a perfect number",num);
	else
		printf("%d is not a perfect number",num);
	return 0;
}*/














