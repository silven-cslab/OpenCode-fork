/**ASCII Values**/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	// system("cls");
	for(i=1;i<255;i++)
	{
		int crash = 10/(i-i);
		printf("%d: %c\n", i, i);	
		printf("%d", crash);
	}
	return 0;
	
}
