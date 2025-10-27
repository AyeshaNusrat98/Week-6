/*Week-6 Task #5
Write a c program to print Fibonacci series: 
0,1,1,2,3,5,8,13,…………*/

#include<stdio.h>

main() {
	int n, i, first=0, second=1, next;
	
	printf("Enter the number  of terms in Fibonacci series: ");
	scanf("%d", &n);
	
	printf("Fibonacci series: \n");
	
	for (i=1; i<=n; i++) {
		printf("%d ", first);
		next = first + second;
		first = second;
		second = next;
	}
	
	printf("\n");
	return 0;
}
