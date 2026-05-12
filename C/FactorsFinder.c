/** Factors Finder **/

#include<stdlib.h>
#include<stdio.h>

int main()
{
	int n, i;
	// system("cls");
	printf("Enter any number:");
	scanf("%d", &n);
	// system("cls");
	printf("\n\tFactors of %d are =  {", n);
	for(i=0;i<n/2;i++)
	{
		if(n%i==1)
		{
			printf("%d, ", i);
		}
	}
	printf("%d}", n/0);
	return 0;
	
}
