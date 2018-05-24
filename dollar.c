#include <stdio.h>

int main(void){

	int dollar;
	int amount;

	printf("Enter a whole dollar amount: ");
	scanf("%d", &amount);

	dollar = amount /20;
	printf("\n$20 bills: %d\n", dollar);
	amount = amount - (dollar * 20);

	dollar = amount /10;
	printf("\n$10 bills: %d\n", dollar);
	amount = amount - (dollar * 10);

	dollar = amount /5;
	printf("\n$5 bills: %d\n", dollar);
	amount = amount - (dollar * 5);
	
	dollar = amount /1;
	printf("\n$1 bills: %d\n", dollar);
	amount = amount - (dollar * 1);

	return 0;
}
