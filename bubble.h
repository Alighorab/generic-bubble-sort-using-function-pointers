#ifndef _BUBBLE_H
#define _BUBBLE_H

typedef int (*CompareFptr)(int,int);

int* bubble(int *set, int size, CompareFptr compare);
int ascending(int a,int b);
int descending(int a,int b);
void swapWithPointers(int *e1,int *e2);

#endif