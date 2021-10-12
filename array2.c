#include<stdio.h>
int main()
{
	int arr[5], i, sum=0;
	
	for(i=0;i<=4;i++)
	{
		printf("Enter Number  ");
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("Sum of Array = %d",sum);
	
	return 0;
}
