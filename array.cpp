#include<stdio.h>
main()
{
	int arr[3][3],i,j,sum;
	printf("Input elements in the matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Element - [%d],[%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The matrix is : ");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}	
    }
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum=sum+arr[i][j];
			}
		}
	}
	printf("\nSum of all diagonal element: %d",sum);
}
