// C++ program for the above operation
struct Node* addToEmpty(struct Node* last, int data)
{
	// This function is only for empty list
	if (last != NULL)
		return last;

	// Creating a node dynamically.
	struct Node* temp
		= (struct Node*)malloc(sizeof(struct Node));

	// Assigning the data.
	temp->data = data;
	last = temp;
	// Note : list was empty. We link single node
	// to itself.
	temp->next = last;

	return last;
}
