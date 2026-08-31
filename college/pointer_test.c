#include <stdio.h>

void arithmetic(int a, int b, int *sum, int *product){
	*sum = a+b;
	*product = a*b;
}
int main(){
	int a, b, sum, product;
	printf("\nEnter the value of A: ");
	scanf("%d",&a);
	printf("\nEnter the value of B: ");
	scanf("%d",&b);
	
	arithmetic(a, b, &sum, &product);
	
	printf("\nSum = %d",sum);
	printf("\nProduct = %d",product);
	return 0;
}
