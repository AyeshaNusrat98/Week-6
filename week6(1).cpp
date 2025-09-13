/*Week-6 Task #1
Write an interactive program in C to find the week day by entering corresponding digit from the keyword (from 1 to 7) using switch case.*/

#include<stdio.h>

main() {
	int n;
	printf("Enter any number from the range of 1-7: \n");
	scanf("%d", &n);
	switch (n) {
		case 1: printf("Sunday");
				break;
		case 2: printf("Monday");
				break;
		case 3: printf("Tuesday");
				break;
		case 4: printf("Wednesday");
				break;
		case 5: printf("Thursday");
				break;
		case 6: printf("Friday");
				break;
		case 7: printf("Saturday");
				break;
		default:
			printf("Invalid input.");
	}
}
