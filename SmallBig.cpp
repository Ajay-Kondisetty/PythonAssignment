#include<stdio.h>
int* smallBig(int arr[],int n)
{
	int i,j,*b;
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	*b=arr[0];
	*(b+1)=arr[n-1];
	return b;
	
}
int main()
{
	int n,i,j,*aa;
	printf("enter number of elements in array\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	aa=smallBig(a,n);
	for(i=0;i<2;i++)
	{
		printf("%d\n",*(aa+i));
	}
	
}
