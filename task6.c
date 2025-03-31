# include <stdio.h>

int main()
{
	const int n = 5;
	int arr[n] = {};
	for(int i = 0; i < n; ++i){
		scanf("%d", &arr[i]);
	}
	for(int i = 1; i < n; ++i){
		printf("%d ", arr[i]);
	}
	printf("%d \n", arr[0]);
}
