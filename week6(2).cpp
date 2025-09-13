/*Week-6 Task #2
Write a program to reverse and to sum of digits of a number which you entered from the keyboard.*/

#include<stdio.h>

main() {
	int n, rev=0, sum=0, lstdg;
	printf("Enter any non-integer no.: \n");
	scanf("%d", &n);
	
	if (n>0) {
		while (n != 0) {
			lstdg = n % 10;
			/*sum of digits of the number*/
			sum = sum + lstdg;
			/*reversed order of digits of the number*/
			rev = rev*10 + lstdg;
			n = n/10;
		}
		printf("Sum of digits of the number = %d\n", sum);
		printf("Reversed order of digits of number = %d\n", rev);
	}
	else
		printf("The number should be non-negative.");
}
