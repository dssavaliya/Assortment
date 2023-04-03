#include<stdio.h>
int main()
{
	
int a[100],i,n;
	printf("Enter Size of Array  : ");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Nagative Element in Array Are :");
    	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
		printf("%d, ",a[i]);
	    }
	    
	}
	
	
	
	return 0;
}
