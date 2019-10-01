#include<stdio.h>
int main()
{
	int arr[10];
	int sum = 0;
	int i;
	for(i=1;i<10;i++)
	{
		scanf("%d", arr[i]);
		sum= sum+arr[i];
	}
	printf("\n%d", sum);
	return 0;
}
