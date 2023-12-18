#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct customer {
	int ID;
	char Vorname[];
	char Nachname[];
	struct customer *next;

} customer;

int* createCustomer(int ID, char Vorname[], char Nachname[])
{
	struct customer* newCustomer;
	newCustomer->ID = ID;
	strcpy(newCustomer->Vorname, Nachname);
	strcpy(newCustomer->Nachname, Nachname);
	newCustomer->next = NULL;
	return newCustomer;

}

void addCustomer(struct customer** head, struct customer* Customer)
{
	customer* newCustomer = (customer*)malloc(sizeof(customer));
	if(*head == NULL)
	{
		
	}
}

void printList(struct customer* head)
{
	struct customer* current = head;
	while (current != NULL) {
		printf("%d: %s %s", current->ID, current->Vorname, current->Nachname);
		current = current->next;
	}
}

void clearList(struct customer * head)
{
	struct customer * current = head;
	struct customer* next;
	while (current != NULL){
		next = current->next;
		free(current);
		current = next;
	}
}

void customerCount()
{

}

int main(int argc, char* argv[]) {
	customer* root = NULL;
	root = createCustomer(1, "Hans", "Maurer");
	addCustomer(root, createCustomer(3, "Tatjana", "Roth"));
	addCustomer(root, createCustomer(2, "Anna-Maria", "Schmidt"));
	printf("Momentan sind %u Kunden erfasst.\n", customerCount(root));
	printList(root);
	clearList(root);
	root = NULL;

	printf("Momentan sind %u Kunden erfasst.\n", customerCount(root));
	printList(root);
	return 0;
}

