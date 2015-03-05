/********************************************************************************** 
 * * 
 * * There are two sorted arrays A and B of size m and n respectively. 
 * * Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).
 * *               
 * **********************************************************************************/


#include "apue.h"

int binarySearch(int A[], int low, int high, int key)
{
	while (low <= high) {
		int mid = low + (high - low)/2;
		if (key == A[mid]) 
			return mid;
		if (key > A[mid]) {
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}
	return low;
}


