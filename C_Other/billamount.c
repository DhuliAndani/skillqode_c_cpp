#include<stdio.h>
int main()
{
	float rate,qty,amt,dis,bill,gst,netbill;
	printf("Enter rate :");
	scanf("%f",&rate);

	printf("Enter qty :");
	scanf("%f",&qty);

	amt=qty*rate;
	printf("\n amt=%.2f",amt);

	dis=amt*0.5;
	printf("\n dis=%.2f",dis);

	bill=amt-dis;
	printf("\n bill=%.2f",bill);

	gst=bill*0.18;
	printf("\n gst=%.2f",gst);

	netbill=bill+gst;
	printf("\n netbill=%.2f",netbill);


	printf("\nqty\trate\tamt\t\tdis\t\tbill\t\tgst\t\tnetbill");
	printf("\n%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t\t%.2f\t\t",qty,rate,amt,dis,bill,gst,netbill);
	
	return 0;
}