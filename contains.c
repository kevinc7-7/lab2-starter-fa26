#include <stdio.h>

int contains(int item, int arr[], int size) {
	for (int i = 0; i < size; i++){
		if (arr[i] == item){

			return 1;
		}
	}
	return 0;
}

int main() {
	int arr[] = {
		2, 9, 2, 0, 2, 5
	};
	printf("Result %d\n", contains(3, arr, 6));
	return 0;
}

