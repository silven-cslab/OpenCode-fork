/** Palindrome Identifier **/

#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i, n, no, s=0, k;
	
	printf("Enter any number:");
	scanf("%d", &n);
	no=n;
	
	if(n < 0)
	{
		printf("Invalid!!Enter positive number only.\n\n");
		return 1;
	}

	while(no != 0)
	{
		k = no % 10;
		s = (s*10) + k;
		no/=10;
	}

	if(n == s)
	{
		printf("\n%d is a Palindrome.\n\n");
	}
	else
	{
		printf("\n%d is not a Palindrome.\n\n");
	}

	return 0;
}