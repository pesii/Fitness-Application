#include "Node.h"

void List::createNode(DietPlan input_data)
{
	ListNode *temp = new ListNode; // Cpp version of C-malloc()
	temp->data = input_data;
	temp->next = NULL;
	if (head == NULL) {
		head = temp;
		tail = temp;
		temp = NULL;
	} else {

	}
}
