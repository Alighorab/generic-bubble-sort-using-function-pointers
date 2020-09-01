#include <stdio.h>
#include "bubble.h"

int main()
{
	int i, set[7]= {5,6,9,7,1,0,3};
	
	printf("set before sorting:\n");
	for(i=0;i<7;i++)
		printf("set[%d] = %d\n",i,set[i]);
		
	bubble(set,7,ascending);
	
	printf("\nAscending:\n");
	for(i=0;i<7;i++)
		printf("set[%d] = %d\n",i,set[i]);
	
	bubble(set,7,descending);
	
	printf("\nDescending:\n");
	for(i=0;i<7;i++)
		printf("set[%d] = %d\n",i,set[i]);
		
	return 0;
}

