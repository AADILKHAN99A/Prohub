#include<stdio.h>
int main()
{
	int arr[5];
	int i;
	int sum=0;
	
	for(i=0;i<=4;i++)
	{
		printf("Enter your fav. Number :- ");
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("Sum of Number you entered = %d",sum);
	
	return 0;
}
