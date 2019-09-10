#include <stdio.h>
#include<stdlib.h>

// Recursive function of binary search 
int binary_search( int arr[], int lb, int hb, int item )
{
	int mid;

	if( hb < lb )
		return -1;
	
	mid = (lb + hb) / 2;

	if( item < arr[mid] )
		return binary_search( arr, lb, mid-1, item );
	else if( item > arr[mid] )
		return binary_search( arr, mid+1, hb, item );
	else
		return mid;	    
}

// Driver function
int main(void) {
	int *arr;
	int loc, size, item, lb=0, hb;
	
	printf("Enter length of array: ");
	scanf("%d",&size);
	
	hb = size - 1;
	
	arr = (int*)malloc(size*sizeof(int));
	
	printf("Enter elements of array: ");
	for( int i=0; i<size; i++)
        scanf("%d",&arr[i]);
    
	printf("Enter the element which you want to search: ");
	scanf("%d",&item);
    
	loc = binary_search( arr, lb, hb, item );
	    
	if( loc == -1 )
		printf("Not Found");
	else
		printf("Found at position : %d", loc+1);
		
	return 0;
}
