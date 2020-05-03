#include<stdio.h>
#include<stdlib.h>


int sort_arr(const void *p, const void *q)
{
	const int l = *(int *)p;
	const int r = *(int *)q;
	return l-r;
}

double find_med(int arr1[],int k)
{
	double m;
	qsort(arr1,k,sizeof(int),sort_arr);
	if(k%2==0)
	{
		m = (arr1[(k-1)/2]+arr1[k/2])/2.0;
	}
	else
	{
		m = arr1[k/2];
	}

	return m;
}

int main()
{
	int i,j,n,k,a;
	printf("Enter Size of array: ");
	scanf("%d",&n);

	int arr[n];

	printf("Ener array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter Window size:  ");
	scanf("%d",&k);
	int arr1[k];
	double m=0;

	printf("OutPut: ");
	for(i=0;i<=(n-k);i++)
	{
		for(j=0;j<k;j++)
		{
			arr1[j]=arr[i+j];
		}
		m = find_med(arr1,k);
		printf("%.2g ",m);
	}

	printf("\n");
	return 0;
}
