#include<stdio.h>
main()
{
	int i,j,m=0,n=1;
	for(i=0;i<7;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d%d",m,n);
		}
		printf("\n");
	}
	return 0;
}
