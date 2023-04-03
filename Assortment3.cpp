#include<stdio.h>
int main()
{
	
//int a[]={45,78,74,71,78,76,72,73,85,89,86},i,n;

//	printf("Size of Array = %d",n);
    int a[100],i,n1,n2;
	printf("Enter Size of Array : ");
	scanf("%d",&n1);
	
	for(i=0;i<n1;i++)
	    {
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
    	}
	    printf("Origanal Array is :");	
	for(i=0;i<n1;i++)
    	{
		printf("%d ",a[i]);
    	}
    	
    printf("\nEnter Right Rotate Value : ");
	scanf("%d",&a[i]);
	
	 printf("Right Rotate Array is :");	
	for(i=0;i<a[i-1];i++)
    	{
		printf("%d ",a[i-1]);
    	}
	
	
	return 0;
}
