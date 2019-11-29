#include <stdio.h>
#define MAX 10
int min(int a,int b);
void allpaths(int a[MAX][MAX],int c[MAX][MAX],int i,int j,int n);
//void printing();
int main()
{
	int a[MAX][MAX],c[MAX][MAX],i,j,n;
	printf("enter the no of vertices:");
	scanf("%d",&n);
	printf("enter the cost matrix:");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&c[i][j]);
		
	
	allpaths(a,c,i,j,n);
	return 0;
}
int min(int a,int b)
{
	if(a>b)
		return b;
	else 	
		return a;
}					
void allpaths(int a[MAX][MAX],int c[MAX][MAX],int i,int j,int n)
{
	int k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=c[i][j];
		}
	}
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
			printf(" ");
		}
		printf("\n\n");
	}
	
}

