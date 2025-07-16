#include <stdio.h>
int main(void)
{
	int arr[] = {8,3,6,2,4};
	int n = sizeof(arr) / sizeof(arr[0]);
	int s = arr[0];
	int i;
	for(i = 0 ; i < n ; i++)
	{
		if(arr[i] < s)
		{
           s = arr[i];
		}
		
	}
	printf("%d\n", s );
	return 0;
}