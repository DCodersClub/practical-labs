#include <stdio.h> 
  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  

    for (i = 0; i < n-1; i++) 
    { 

        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  

        swap(&arr[min_idx], &arr[i]); 
    } 
} 
  

void display_Array(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  

int main() 
{ 
    //int arr[] = {240, 55, 180, 4, 11, 5,421,44,129,411,-200}; 
	int n = 0;
	int arr[20];
	
	printf("Enter the number of elements\n");
	scanf("%d", &n);
	
	printf("\nEnter the elements of the array : ");
    for (int i = 0; i < n; i++)
       scanf("%d", &arr[i]);
   
    
	printf("\nOriginal array:\n");
	display_Array(arr, n);
	
	selectionSort(arr, n);
	printf("\n\nSorted array:\n");	
    display_Array(arr, n); 
    return 0; 
} 