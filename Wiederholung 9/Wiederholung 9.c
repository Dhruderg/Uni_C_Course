#include <stdio.h>
#include <stdlib.h>


typedef struct numberItem
{
	int data;
	struct numberItem* next;
	struct numberItem* previous;

}numberItem;

numberItem* append(struct numberItem* prev, int input)
{
	numberItem* item = malloc(sizeof(numberItem));
	if(item==NULL)
	{
		return item;
	}
	item->data = input;
	item->next = NULL;
	item->previous = prev;

	if(prev)
	{
		numberItem* next = prev->next;
		prev->next = item;
		item->next = next;
		if(next)
		{
			next->previous = item;
		}
	}
	return item;
}

numberItem* last(struct numberItem* item)
{
	while (item->next != NULL)
	{
		item = item->next;
	}

	return item;
}
numberItem* first(numberItem* item) {
	while(item && item->previous)
	{
		item = item->previous;
	}
	return item;
}

void print(numberItem* list)
{
	numberItem* current = list;
	while (current != NULL)
	{
		printf("%d", current->data);
		current = current->next;
		printf(" ");
	}
}

void freeList(numberItem* list) {
	numberItem* current = list;
	while (current != NULL) {
		numberItem* temp = current;
		current = current->next;
		free(temp);
	}
}

int main()
{
	numberItem* item = NULL;
	item = append(item, 42);
	item = append(item, 1);

	item = first(item);     // jump to first element
	item = append(item, 3);
	item = append(item, 4);

	item = last(item);  // jump to last element
	item = append(item, 99); // Attach last element

	item = first(item);
	print(item);

	freeList(item);

	return 0;
}
