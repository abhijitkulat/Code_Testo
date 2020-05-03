#include<stdio.h>
#include<stdlib.h>

int sort_arr(const void *p, const void *q)
{
	int l = *(int *)p, r = *(int *)q;
	return l-r;
}


int main()
{
	int i,j,k,n,flag;
	printf("Enter Array Size:  ");
	scanf("%d",&n);

	int arr[n];
	printf("Enter array elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	qsort(arr,n,sizeof(int),sort_arr);

	for(i=0;i<n;i++)
	{
		if(arr[i] != i)
		{
			flag = 0;
			for(j=0;j<n;j++)
			{
				if(arr[j] == i)
				{
					arr[i]=arr[j];
					flag = 1;
					break;
				}
			}

			if(flag !=1)
			{
				arr[i] = -1;
			}
		}
	}

	printf("\n");
	 for(i=0;i<n;i++)
      {
          printf("%d ",arr[i]);
      }

	 return 0;
}
