#include "bubble.h"

int* bubble(int *set, int size, CompareFptr compare)
{
	int swap = 1;
	for(int i=0;i<size-1 && swap;i++)
	{
		swap = 0;
		for(int j=0;j<size-i-1;j++) 
		{
			if(compare(set[j],set[j+1]))
			{
				swap = 1;
				swapWithPointers(&set[j],&set[j+1]);
			}
		}
	}
	return set;
}

int ascending(int a, int b)
{
	return b < a;
} 

int descending(int a, int b)
{
	return a < b;
} 

void swapWithPointers(int *e1,int *e2)
{
	int temp = *e1;
	*e1 = *e2;
	*e2 = temp;
}