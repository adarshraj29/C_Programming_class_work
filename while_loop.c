#include<stdio.h>
main()
{
	char inp, valid='n';
	while(valid=='n')
	{
	valid=' ';
	puts("enter y or n");
	inp=getchar();
	fflush(stdin);
	
	if(inp=='y')
	       puts("valid input");
    else if(inp=='n')
	       puts("valid input");
    else
	{
		valid='n';
		puts("invalid data");
		}	
	}
	
	
}