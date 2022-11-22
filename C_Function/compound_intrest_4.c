/* no return with perameter */
//------------------------------

#include <stdio.h>
#include<math.h>
float dosum(float amt,float time,float rate)
{
	float ci;
	ci=amt*(pow((1+rate/100),time));
	printf("\n ci:%f",ci);
    	
}
float main()
{
    	float amt,time,rate,ci;
    	printf("Enter principle amount : ");
    	scanf("%f", &amt);

    	printf("Enter time : ");
    	scanf("%f", &time);

    	printf("Enter rate : ");
    	scanf("%f", &rate);
    	ci=dosum(amt,time,rate);
	
}