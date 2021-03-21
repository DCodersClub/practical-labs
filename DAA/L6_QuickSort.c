#include<stdio.h> 

int ITER = 0;

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than the pivot 
        if (arr[j] < pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
/* The core function */
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        ITER += 1;
        int pi = partition(arr, low, high); 
  

        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
  
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  

int main() 
{ 
    int arr[] = {240, 55, 180, 4, 11, 5,421,44,129,411,-200}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
	printf("Input array: \n");
	printArray(arr, n);
    quickSort(arr, 0, n-1); 
    printf("Sorted array: \n"); 
    printArray(arr, n);
	//printf("\n Iterations: %d \t Elements: %d", ITER, n);
	
    return 0; 
} 