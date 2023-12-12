#include<stdio.h>

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
	}
	return 0;
}

void treeLegChoose(int height) // Leg size depending on tree height
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
	for (int i = 0; i < tree_width(height) / 2; i++)
	{
		printf(" ");
	}
	printf("##\n");
}

void branches(int height, int index)
{
	int limiter = 3;	//Limit the rows per branch
	if (index == height - 1)
	{
		limiter = 2;
	}
	for (int i = 0; i < limiter; i++) {	//i is row number for every branch apart from last
		for (int x = 0; x < height + 1 - index - i; x++) { //empty space before wall
			printf(" ");
		}
		printf("/"); //Print left side of tree
		for (int j = 0; j < (i + index) * 2; j++) { //Count inside spaces until we at the right side
			if (i == 2 && (j == 0 || j == (i + index) * 2 - 1)) {
				printf("_");	//print '_' before both ending sides
			}
			else if (j % 4 == 1) {
				printf("i");	//print decoration if x%4 =...,5
			}
			else {
				printf(" "); //otherwise print empty space
			}
		}
		printf("\\\n");	//print right side of tree
	}
	if (index != height - 1) {
		branches(height, index + 1);
	}
	else {
		printf("/");
		for (int i = 0; i < tree_width(height); i++) {
			printf("_"); // print last row of tree;
		}
		printf("\\\n");
	}
}

int tree_width(int height)
{ // max width of the tree -2 (for the / and \)
	return height * 2 + 2;
}
