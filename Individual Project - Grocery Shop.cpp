// GROCERY SHOPPING PROGRAM
#include <iostream>
using namespace std;

int main()

{
	int milkQ, butterQ, yogurtQ, eggQ, milkF, yogurtF;
	int num, buy, timeslot;
	float milkP=7.50, butterP=7.00, yogurtP=6.90, eggP=4.50;
	float totalP=0.00, deliveryP=8.90;
	
	//welcome customers
	printf("\t\t   Welcome to\n");
	printf("\t---- Abid Lee Supermarket ----\n\n");
	printf("--> Free delivery for orders more than RM40 <--");
	
	//ask customer to choose what to do
	printf("\n\nEnter 1 to start shopping or other number for checkout: ");
	scanf(" %d",&num);
	
	while(num==1)
	{
		printf("\n\tDairy Products\n");
		printf("1.  Milk 1L\t\tRM%.2f\n", milkP);
		printf("2.  Butter 250g\t\tRM%.2f\n", butterP);
		printf("3.  Yogurt 500g\t\tRM%.2f\n", yogurtP);
		printf("4.  Eggs 10pcs\t\tRM%.2f", eggP);
		printf("\n\nWhat to buy [1/2/3/4]: ");
		scanf(" %d",&buy);
			
		if(buy==1)
		{
			printf("\nMilk 1L  RM%.2f", milkP);
			printf("\nFlavour:1. Fresh Milk\n\t2. Chocolate Milk (add RM1.00)\n\t3. Strawberry Milk (add RM0.90)\n");
			printf("\nChoose flavour [1/2/3]: ");
			scanf(" %d", &milkF);
			if(milkF==1)
			{
				printf("Enter quantity: ");
				scanf(" %d",&milkQ);
				totalP=totalP+(milkP*milkQ);
			}
			else if(milkF==2)
			{
				printf("Enter quantity: ");
				scanf(" %d",&milkQ);
				totalP=totalP+((milkP+1)*milkQ);
			}
			else if(milkF==3)
			{
				printf("Enter quantity: ");
				scanf(" %d",&milkQ);
				totalP=totalP+((milkP+0.9)*milkQ);
			}
		}
			
		else if(buy==2)
		{
			printf("\nButter 250g  RM%.2f", butterP);
			printf("\nEnter quantity: ");
			scanf(" %d",&butterQ);
			totalP=totalP+(butterP*butterQ);
		}
		
		else if(buy==3)
		{
			printf("\nYogurt 500g  RM%.2f", yogurtP);
			printf("\nFlavour:1. Plain\n\t2. Peach (add RM0.60)\n\t3. Mango (add RM0.80)\n\t4. Mixed Berries (add RM0.50)\n");
			printf("\nChoose flavour [1/2/3/4]: ");
			scanf(" %d", &yogurtF);
			if(yogurtF==1)
			{
				printf("Enter quantity: ");
				scanf(" %d",&yogurtQ);
				totalP=totalP+(yogurtP*yogurtQ);
			}
			else if(yogurtF==2)
			{
				printf("Enter quantity: ");
				scanf(" %d",&yogurtQ);
				totalP=totalP+((yogurtP+0.6)*yogurtQ);
			}
			else if(yogurtF==3)
			{
				printf("Enter quantity: ");
				scanf(" %d",&yogurtQ);
				totalP=totalP+((yogurtP+0.8)*yogurtQ);
			}
			else if(yogurtF==4)
			{
				printf("Enter quantity: ");
				scanf(" %d",&yogurtQ);
				totalP=totalP+((yogurtP+0.5)*yogurtQ);
			}	
		}
		
		else if(buy==4)
		{
			printf("\nEggs 10pcs  RM%.2f", eggP);
			printf("\nEnter quantity: ");
			scanf(" %d",&eggQ);
			totalP=totalP+(eggP*eggQ);
		}
		
		else
			printf("\nInvalid option");
		
		printf("\nEnter 1 to continue shopping or other number for checkout: ");
		scanf(" %d",&num);
		
	}
	
	printf("\n\t\t--CHECKOUT--\n");
	
	//display and ask for delivery slot
	printf("\n\tDelivery Slots Available\n");
	printf("1.  10.00a.m. - 12.00p.m.\n");
	printf("2.  2.00p.m. - 4.00p.m.\n");
	printf("3.  4.30p.m. - 6.30p.m.\n");
	
	printf("Choose your delivery slot [1/2/3]: ");
	scanf(" %d",&timeslot);
	
	//display customer receipt
	printf("\n\tRECEIPT\n");
	printf("\nSubtotal= = RM%.2f\n", totalP);
	
	//calculate delivery charges
	if(totalP<40.00)
	{
		totalP=totalP+deliveryP;
		printf("Delivery Charge = RM%.2f", deliveryP);
	}
	else
	{
		totalP=totalP;
		printf("Delivery Charge = free");
	}
		
	printf("\nTotal Amount = RM%.2f", totalP);
	
	switch(timeslot)
	{
		case 1:
			printf("\nDelivery Slot: 10.00a.m. - 12.00p.m.");
			break;
		
		case 2:
			printf("\nDelivery Slot: 2.00p.m. - 4.00p.m.");
			break;
		
		case 3:
			printf("\nDelivery Slot: 4.30p.m. - 6.30p.m.");
			break;
	}
		
	printf("\n\nThank you for shopping with us. Please come again.");
	
	return 0;
}