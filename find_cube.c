#include<stdio.h>
int main()
{
	int num;
	printf("enter any number:-");
	scanf("%d",&num);
	fflush(stdin);
	printf("your number is:-%d",num*num*num);
}