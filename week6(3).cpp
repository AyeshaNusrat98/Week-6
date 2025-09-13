/*Week-6 Task #3
Write a program to find all Armstrong Number in the range of 0 and 999.*/

#include<stdio.h>
#include<math.h>

main() {
	int number, original_num, digit, sum;
	printf("Armstrong numbers between the range of 0-999 are: \n");
	for (number=0; number<=999; number++) {
		original_num = number;
		sum = 0;
		while (original_num > 0) {
			digit = original_num % 10;
			sum += pow(digit,3);
			original_num /= 10;
		}
		if (sum == number)
			printf("%d\n", number);
	}
	return 0;
}
