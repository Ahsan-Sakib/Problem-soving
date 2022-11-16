// C++ program to detect loop in a linked list
#include<iostream>
#include<unordered_set>
using namespace std;

/* Link list node */
struct Node {
	int data;
	Node* next;
};

void push(Node** head_ref, int new_data)
{
	/* allocate node */
	struct Node* new_node = new Node;

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

// Returns true if there is a loop in linked list
// else returns false.
bool detectLoop(struct Node* h)
{
	unordered_set<Node*> s;
    Node *previousNode = h;
	while (h != NULL) {
		// If this node is already present
		// in hashmap it means there is a cycle
		// (Because you will be encountering the
		// node for the second time).
		if (s.find(h) != s.end()){
          //  previousNode->next = NULL;
			return true;
        }

		// If we are seeing the node for
		// the first time, insert it in hash
		s.insert(h);

        previousNode = h;
		h = h->next;

	}

	return false;
}

/* Driver program to test above function*/
int main()
{
	/* Start with the empty list */
	struct Node* head = NULL;

	push(&head, 20);
	push(&head, 4);
	push(&head, 15);
	push(&head, 10);

	/* Create a loop for testing */
	head->next->next->next->next = head;

	if (detectLoop(head))
		cout << "Loop found"<<endl;
	else
		cout << "No Loop"<<endl;

// Node *temp = head;
// cout<<temp->data<<endl;
// while (temp->next != NULL)
// {
//     temp= temp->next;
//     cout<<temp->data<<endl;
// }

	return 0;
}
// This code is contributed by Geetanjali

