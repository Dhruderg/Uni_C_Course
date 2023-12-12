#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996) 
/*
Weihnachtsbaum
By: Dominik Szabo
Bsp: Input 1:
  /\
 / i\
/____\
  ##


*/
// Note to self, tree leg starts at same y position where the top of the tree starts
// Bottom of tree position is (input+2)*2
// three max width is 2*input + 4

void treeLegChoose(int height);
void branches(int height, int index);
void print_leg(int height);
int tree_width(int height);

int main() {
	int TreeSize;
	scanf("%d", &TreeSize);
	if (TreeSize != 0)
	{
		branches(TreeSize, 0);
		treeLegChoose(TreeSize);
	} else
	{
		printf("0");
	}
	return 0;
}

void treeLegChoose(int height)
{
	switch (height)
	{
	case 1:
		print_leg(height);
		break;
	case 2:
		print_leg(height);
		print_leg(height);
		break;
	default:
		print_leg(height);
		print_leg(height);
		print_leg(height);
		break;
	}
}

void print_leg(int height)
{
	for (int i = 0; i < (height * 2 + 2) / 2; i++)
	{
		printf(" ");
	}
	printf("##\n");
}

void branches(int height, int index)
{
	int limiter = 3;
	if(index == height - 1)
	{
		limiter = 2;
	}
	
}

int tree_width(int height)
{ // max width of the tree -2 (for the / and \)
	return height * 2 + 2;
}
