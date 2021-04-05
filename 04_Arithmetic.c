#include<stdio.h>
int main()
{
	int a,b,add,subtract,multiply,divide;
	
	printf("Enter the value of a:");
	scanf("%d",&a);
	
	printf("Enter the value of b:");
	scanf("%d",&b);
	
	add=a+b;
	subtract=a-b;
	multiply=a*b;
	divide=a/b;
	
	
	printf("Addition of a and b is %d\n",add);
	printf("Subtraction of a and b is %d\n",subtract);
	printf("Multiplication of a and b is %d\n",multiply);
	printf("Division of a and b is %d\n",divide);
	
	return 0;
	
}
