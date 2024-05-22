#include<stdio.h>
main()
{
		char a_char;
	puts("enter a character in lower case :");
	a_char = getchar();
	fflush (stdin);
	switch(a_char)
	{
		case 'a' : puts("vowel a");
		           break;
		case 'A' : puts("vowel A");
		           break;
		case 'e' : puts("vowel e");
		           break;
		case 'E' : puts("vowel E");
		           break;
		case 'i' : puts("vowel i");
		           break;
		case 'I' : puts("vowel I");
		           break;
		case 'o' : puts("vowel o");
		           break;	
		case 'O' : puts("vowel O");
		           break;
		case 'u' : puts("vowel u");
		           break;
		case 'U' : puts("vowel U");
		           break;	 
	    default  : puts("not a vowel");
		           break;  
   }
}
