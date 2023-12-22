#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct customer {
	int ID;
	char Vorname[20];
	char Nachname[20];
	struct customer *next;

} customer;

void insert(struct customer* head) {
	struct customer* current = head;	//Startpoint at head
	struct customer* SortedList = NULL;	//create new linked list where elements sorted

	while (current != NULL)
	{
		struct customer* next = current->next;	// Next element in the list
		if (SortedList == NULL || current->ID < SortedList->ID)	//If element == first in list or current ID smaller than sorted ID at same pos
		{
			current->next = SortedList;	//switch values
			SortedList = current;		//switch values
		} else
		{
			while(SortedList->next != NULL && SortedList->next->ID < current->ID) {	//While the value of next node is not null and its ID is smaller than current one's
				SortedList = SortedList->next;	//switch temp
			}
			current->next = SortedList->next;	//synchronize pointers
			SortedList->next = current;	// make next node the current node
		}
		current = next;	//Continue sorting from next element
	}
}
customer* createCustomer(int ID, const char Vorname[],const char Nachname[])	//Create Node for customer
{
	customer* newCustomer = (customer*)malloc(sizeof(customer));
	if (newCustomer==NULL){
		exit(1);
	}
	/*Set the values*/
	newCustomer->ID = ID;
	strcpy(newCustomer->Vorname, Vorname);
	strcpy(newCustomer->Nachname, Nachname);
	newCustomer->next = NULL;

	return newCustomer;
}

void addCustomer(struct customer* head, struct customer* newCustomer)	//Add the new Customer into the List
{
	struct customer *current = head;
	while (current->next != NULL){
		current = current->next;
	}
	current->next = newCustomer;
	insert(head);	//Sort the List
}

void printList(struct customer* head)	//Print the list by looping trough the nodes
{
	struct customer* current = head;
	while (current != NULL) {
		printf("%d: %s %s\n", current->ID, current->Vorname, current->Nachname);
		current = current->next;
	}
}

void clearList(struct customer * head)	//Clear every single node
{
	struct customer * current = head;
	struct customer* next;
	while (current != NULL){
		next = current->next;
		free(current);
		current = next;
	}
}

int customerCount(struct customer * head)	//Gives back how many nodes there is in the linked list
{
	struct customer* current = head;
	int count = 0;
	while (current!=NULL)
	{
		count++;
		current = current->next;
	}
	return count;
}

int main(int argc, char* argv[]) {
	customer* root = NULL;
	root = createCustomer(1, "Hans", "Maurer");
	addCustomer(root, createCustomer(3, "Tatjana", "Roth"));
	addCustomer(root, createCustomer(2, "Anna-Maria", "Schmidt"));
	addCustomer(root, createCustomer(4, "Anna-Maria4", "Schmidt"));
	addCustomer(root, createCustomer(5, "Anna-Maria5", "Schmidt"));
	addCustomer(root, createCustomer(10, "Anna-Maria", "Schmidt"));
	addCustomer(root, createCustomer(7, "Anna-Maria", "Schmidt"));
	printf("Momentan sind %u Kunden erfasst.\n", customerCount(root));
	printList(root);
	clearList(root);
	root = NULL;

	printf("Momentan sind %u Kunden erfasst.\n", customerCount(root));
	printList(root);
	return 0;
}