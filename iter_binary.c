#include <stdio.h>
#include<stdlib.h>

// Iterative function of binary search 
int binary_search( int arr[], int size, int item )
{
	int lb=0, hb, mid;
	    
	hb = size -1;
	mid = (lb + hb) / 2;
	    
	while( lb <= hb && arr[mid] != item )
	{
	if( item < arr[mid] )
		hb = mid - 1;
	else
		lb = mid + 1;
	mid = (lb + hb) / 2;
	}
	    
	if( arr[mid] == item )
		return mid;
	else
		return -1;
}

// Driver function
int main(void) {
	int *arr;
	int loc, size, item;
	
	printf("Enter length of array: ");
	scanf("%d",&size);
	
	arr = (int*)malloc(size*sizeof(int));
	
	printf("Enter elements of array: ");
	for( int i=0; i<size; i++)
        scanf("%d",&arr[i]);
    
	printf("Enter the element which you want to search: ");
	scanf("%d",&item);
    
	loc = binary_search( arr, size, item );
	    
	if( loc == -1 )
		printf("Not Found");
	else
		printf("Found at position : %d", loc+1);
		
	return 0;
}
