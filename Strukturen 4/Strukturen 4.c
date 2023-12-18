#include <stdio.h>
#include <stdlib.h>

/*Declaration of Node*/
typedef struct numberItem {
	int val;
	struct numberItem* next;	// Next Node
} numberItem;

/*Add elements into the linked list*/
void appendNumberItem(struct numberItem ** head,int num)
{
	numberItem* newNumber = (numberItem*)malloc(sizeof(numberItem)); //Create the dynamic 'array' which will always expand
	newNumber->val = num;	// Assign the new Node the given value
	newNumber->next = NULL;	// Remove any connection to what the next node is
	if(*head == NULL){		// Check if first node 0
		*head = newNumber;	// If first node 0, input number goes to first node
	} else{
		numberItem* current = *head;	// Otherwise make the head node the current one (head node is last added element)
		while (current->next != NULL){	// While current node's next jumppoint IS NOT NULL
			current = current->next;	// Jump nodes and get to the latest added Node
		}
		current->next = newNumber;		// Assign the current Node the new address of the new values
	}
}

void clearList(struct numberItem * head)	// Get access to the list
{
	struct numberItem* current = head;	// Get position of first element
	struct numberItem * next;	// define the next element to be cleared

	while (current != NULL){	// As long as the current Node is not NULL
		next = current->next;	// Assign the next node to next
		free(current);			// Clear malloc memory
		current = next;			// Get the next node
	}
}

void printList(struct numberItem * head)		// Get access to the list
{
	struct numberItem* current = head;			// Get position of first element
	while (current != NULL)	{					// As long as the current node NOT NULL
		printf("%d\n", current->val);	// Get the value of the current node
		current = current->next;				// Get the next node
	}
}

int main()
{
	numberItem* root = NULL;					// Assign head value NULL
	appendNumberItem(&root, 42);				// Add value 42
	appendNumberItem(&root, 1);				// Add value 1
	appendNumberItem(&root, 2);				// Add value 2
	appendNumberItem(&root, 3);				// Add value 3
	printList(root);							// print out List
	clearList(root);							// clear List

	return 0;
}