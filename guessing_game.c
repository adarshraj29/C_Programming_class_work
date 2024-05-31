#include<stdio.h>
main()
{
	int num,guess,count=0;
	srand (time(0));
	num = rand() % 100 +1;
	while (num != guess)
	{
		printf("guess the number 1 to 100:- ");
		scanf("%d",&guess);
		if (guess>num)
		{
			printf("to High! Try Again \n");
		}
		if (guess<num)
		{
			printf("Too Low! Try Again \n");
		}
		count+=1;
	}
	printf("correct ! You guessed the correct number in %d times",count);
}