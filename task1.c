# include <stdio.h>

int main()
{
	const int size = 5;
	int arr[size] = {};
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr[i]);
	}

	int add = 0;
	int mul = 1;
	for(int i = 0; i < size;  ++i){
		add += arr[i];
		mul *= arr[i];	
	}
	printf("%d %d \n", add, mul);
}
