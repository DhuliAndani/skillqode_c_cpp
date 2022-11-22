/* with return no perameter */
//------------------------------

#include <stdio.h>
#include<math.h>
float dosum()
{
	float amt,time,rate,ci;
    	printf("Enter principle amount : ");
    	scanf("%f", &amt);

    	printf("Enter time : ");
    	scanf("%f", &time);

    	printf("Enter rate : ");
    	scanf("%f", &rate);
    	return (ci=amt*(pow((1+rate/100),time)));
}
float main()
{
    	float ci;
    	ci=dosum();
	printf("\n ci:%f",ci);
}