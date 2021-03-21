/*
	Sahil Verma
	1812210089
	CS 53
*/

#include <stdio.h>

int recursive_binary(int*, int, int, int);
int recursive_linear(int*, int, int);
int LEN;

int main(){
	int a[20];
	int no = 0;
	int find = 1;
	int hasFound;
	
	printf("Enter the number of elements\n");
	scanf("%d", &no);
	
	printf("\nEnter the elements of the array : ");
    for (int i = 0; i < no; i++)
       scanf("%d", &a[i]);
	
	printf("\nEnter the element to be found \n");
	scanf("%d", &find);
	
	LEN = no;
	
	hasFound = recursive_linear(a, 0, find);
	(hasFound ? printf("\nelement %d is present", find): printf("\nelement %d is not present",find));
	
	printf("\nSearching using binary search \n");

	hasFound = recursive_binary(a, 0, no, find);
	
	(hasFound ? printf("\nelement %d is present", find): printf("\nelement %d is not present",find));
	
	
	return 0;
}


int recursive_binary(int* arr, int start, int end, int target){
	int mid = (int) start + (end - start) / 2;
	if (target == arr[mid])
		return 1;
		
	else if (mid == start)
		return 0;
		
	else if (target > arr[mid])
		return recursive_binary(arr, mid , end, target);
	
	else if (target < arr[mid])
		return recursive_binary(arr, start, mid, target);

}

int recursive_linear(int* arr, int n, int find){
	if (arr[n] == find)
		return 1;
	
	if (n >= LEN)
		return 0;
		
	return recursive_linear(arr, n + 1, find);
}
