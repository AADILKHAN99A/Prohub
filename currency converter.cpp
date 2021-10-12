#include<stdio.h>
void curr(int n,float amt)
{
  float USD =0.014, Euro =0.012, CY =0.088, Pound =0.099;
  if(n==1)
  {
  	float res = amt*USD;
  	printf("USD = %f",res);
  }
  else if(n==2)
  {
  	float res =amt*Euro;
  	printf("Euro = %f",res);
  }
  else if(n==3)
  {
  	float res =amt*CY;
  	printf("CY = %f",res);
  }
  else if(n==4)
  {
  	float res =amt*Pound;
  	printf("Pound = %f",res);
  }
  
}
int main()
{
	int n;
	float amt;
	printf("\t\tCurrency Converter\n\n");
	label:
	printf("1. INR to USD\n2. INR to Euro\n3. INR to CY\n4. INR to Pound\n\n");
	printf("Enter Choice   ");
	scanf("%d",&n);
	if(n>4||n<1)
  {
  	printf("\n**Enter Right Choice**\n\n");
  	goto label;
  }
	printf("Enter Amount  ");
	scanf("%f",&amt);
	
	curr(n,amt);

}
