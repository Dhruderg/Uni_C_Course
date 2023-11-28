#include <stdio.h>

int minimum(int * pointer, int length)
{
	int val = *pointer;
	for (int x=0; x<length; x++)
	{
		if(val> *pointer)
		{
			val = *pointer;
		}
		++pointer;
	}
	return val;
}
int main()
{
	int numbers[] = { 4, 6, 9, 5 };
	printf("%d", minimum(numbers, 4));
	return 0;
}