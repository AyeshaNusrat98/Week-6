/*Week-6 Task #4
Write a program to check the entered numbered is palindrome or not. Noted that palindrome means a number and its reverse number is same. For example: 1221.*/

#include<stdio.h>

main() {
	int num, rev=0, original_num, lstdg;
	printf("Enter any number: \n");
	scanf("%d", &num);
	
	original_num = num;
	
	/*reverse the digit*/
	while (num>0) {
		lstdg = num % 10;
		rev = rev*10 + lstdg;
		num /= 10;
	}
	
	/*check whether palindrome*/
	if (original_num == rev)
		printf("\'%d\' is a palindrome number.\n", original_num);
	else
		printf("\'%d\' is not a palindrome number.\n", original_num);
	
	return 0;
}
