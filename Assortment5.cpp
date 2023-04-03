#include<stdio.h>
int main()
{
	
int a[10][10],i,n1,n2,b[10][10],j;
	printf("Enter Number of Rows : ");
	scanf("%d",&n1);
	printf("Enter Number of Colums : ");
	scanf("%d",&n2);
		
	printf("Enter Element of 1st Matrix a[]: \n");
	for(i=0;i<n1;i++)
	for(j=0;j<n2;++j)
	{
		printf("a :[%d][%d] = ",i,j);
		scanf("%d",&a[i][j]);
		b[j][i] = a[i][j];
	}
	printf("Matrix a[]=\t");
	printf("Transpose a[]=\n");
	for(i=0;i<n1;i++)
	{
	for(j=0;j<n2;++j)
		{
		printf("%d ",a[i][j]);
    	}
    	printf("         ");
    	for(j=0;j<n2;++j)
      	{
		printf("%d ",b[i][j]);
    	}
    	printf("     \n");
    }
    
    return 0;
}
