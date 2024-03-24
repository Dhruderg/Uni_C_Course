#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996) 


int main(int argc, char* argv[]) {
	/*Declaration*/
	int sortednums; //Defines how many numbers it should sort
	int temp;
	scanf("%d", &sortednums); //Scan Sortednumber

	int* list = malloc(sortednums * sizeof(int));
	for (int i = 0; i < sortednums; i++)    //fill up array
	{
		scanf("%d", &list[i]);
	}

	for (int i = 0; i < sortednums; i++)
	{
		for (int x = 0; x < sortednums; x++)
		{
			if (list[i] < list[x]) //Simplest sorting algorithm
			{
				temp = list[i];
				list[i] = list[x];
				list[x] = temp;
			}
		}
	}
	/*Output*/
	for (int i = 0; i < sortednums; i++)
	{
		printf("%3d: %3d", i + 1, list[i]);
	}
	free(list); //free the array
	return 0;
}
