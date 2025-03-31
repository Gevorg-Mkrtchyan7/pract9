# include <stdio.h>

int main()
{
	const int n = 5;
	char arr[n] = {};
	for(int i = 0; i < n; ++i){
		scanf(" %c", &arr[i]);
	}
	for(int i = 0; i < n / 2; ++i){
		if(arr[i] == arr[n - i - 1]){
		}else{
			printf("Not Palindrome \n");
			return 0;
		}
	}
	printf("Palindrome \n");
}
