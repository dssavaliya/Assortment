#include<stdio.h>
int main()
{
	
int a[10][10],i,n1,n2,j,sum=0;
	printf("Enter Number of Rows : ");
	scanf("%d",&n1);
	printf("Enter Number of Colums : ");
	scanf("%d",&n2);
		
		  if(n1==n2)
		  {
		
	printf("Enter Element of Matrix a[]: \n");
	for(i=0;i<n1;i++)
	for(j=0;j<n2;j++)
	{
		printf("a :[%d][%d] = ",i,j);
		scanf("%d",&a[i][j]);
	
	}   printf("Matrix a[]=\n");
	    for(i=0;i<n1;i++)
      	{
      		sum = sum + a[i][i];
	      for(j=0;j<n2;j++)
		  {
		  printf("%d ",a[i][j]);
    	  } 
    	  printf("\n");
        }
         printf("The sum of Diagonal element of  a[]=\n");
    
     	 printf("%d ",sum);
        
          }  
          else
          {
          	printf("The Given order is not Square Matrix\n");
		  }
	
	return 0;
}
