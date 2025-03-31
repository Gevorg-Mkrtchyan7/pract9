# include <stdio.h>

int main()
{
	const int n = 5;
	char arr[n] = {};
	for(int i = 0; i < n; ++i){
		scanf(" %c", &arr[i]);
	}
	char a = 0;
	for(int i = 0; i < n; ++i){
		a = arr[n - i - 1]; 
		printf("%c ", a);
	}
	printf("\n");
}
