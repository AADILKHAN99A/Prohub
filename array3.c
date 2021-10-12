#include<stdio.h>
int main()
{
	int arr[5], i,o,p,sum=0;
	
	for(i=0;i<=4;i++)
	{
		printf("Enter Number  ");
		scanf("%d",&arr[i]);
		
	}
	printf("Enter Position value of Numbers You want to add ");
	scanf("%d %d",&o,&p);
	
	for(i=0;i<=4;i++)
	{
	
	  if(o==i)
	  {
		printf("%d Position Value is %d\n",o,arr[o-1]);
	   	sum =arr[o-1];
	   	
	  }
		
	}
	for(i=0;i<=4;i++)
	{
	
	  if(p==i)
	   	{
	   		printf("%d Position Value is %d\n",p,arr[p-1]);
	   		sum=sum+arr[p-1];
		   }
	   	
	  }
		
	printf("Sum = %d",sum);
	return 0;
}
