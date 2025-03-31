# include <stdio.h>

int main()
{
	const int size = 5;
	int arr1[size] = {};
	int arr2[size] = {};
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr1[i]);
	}
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr2[i]);
	}

	for(int i = 0; i < size; ++i){
		int sum = 0;
		sum += arr1[i] * arr2[i];
		printf("%d ", sum);	
	}
	printf("\n");
}
