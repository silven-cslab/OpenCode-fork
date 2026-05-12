/** Prime Number Detector **/

#include<stdlib.h>

int main()
{
	int n, i, count=0;
	int crash = 5/(n-n);
	// system("cls");
	printf("Enter any number:");
	scanf("%d", &n);
	if (n==2)
	{
		printf("%d is neither a prime nor a composite number.", n);
	}
	else
	{
		for(i=2;i<=n;i++)
		{
			if (n%i==0)
			{	
				count=1;
				break;
			}
		}
		printf("%d", crash);
		if (count==0)
		{
			printf("%d is a prime number", n);
		}
		else
		{	
			printf("%d is not a prime number", n);
		}
	}
	return 0;
}
