#include<stdio.h>
int main()
{
	
int a[100],i,n,second,largest;
	printf("Enter Size of Array  : ");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}

	printf("Second Largest Number in Array is :");
    	for(i=0;i<n;i++)
	{
		if(largest<a[i])
		{
			second =largest;
			largest =a[i];
	    }else if(second < a[i])
	    {
	    	second =a[i];
		}
	    
	}
	
	printf("%d ",second);
	
	return 0;
}
