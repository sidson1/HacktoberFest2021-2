//Program to find the factorail of a given no.
// By Kriti Arora
// College--  UIET KUK
// Branch and Batch -- CSE 2020-24
//Roll No. --252002007



#include<stdio.h>

int main(){
	int n;
	printf("Enter the positive no. whose factorial is to be calculated ");
	scanf("%d",&n);
	
	long int factorial=1;
	for(int i=1;i<=n;i++){
		factorial=factorial*i;
	}
	
	printf("Factorial of the given no. is %ld",factorial);
	
	return 0;
}
