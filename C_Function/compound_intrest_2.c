/* with return with perameter */
//------------------------------

#include <stdio.h>
#include<math.h>
float dosum(float amt,float time,float rate)
{
    float ci;
    ci=amt*(pow((1+rate/100),time));
    return (ci=amt*(pow((1+rate/100),time)));
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
    printf("\n ci:%f",dosum(amt,time,rate));
     
  
}