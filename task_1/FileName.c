#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void allocateAndInput(int** arr, int size);

void main() {
	int size, * arr = NULL, i;
	printf("Please enter the size of the array: ");
	scanf("%d", &size);
	allocateAndInput(&arr, size);

	printf("Values in the array: ");
	for (i = 0; i < size; i++) {
		printf("%d  ", arr[i]);
	}
	free(arr);
}

void allocateAndInput(int** arr, int size) {
	int i; 
	*arr = (int*)malloc(size * sizeof(int));
	if (!*arr) {
		printf("ERROR! Memory allocation failed");
		exit(1);
	}

	for (i = 0; i < size; i++) {
		printf("Enter the #%d value: ", i + 1);
		scanf("%d", &(*arr)[i]);
	}
}