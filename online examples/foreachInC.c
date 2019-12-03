
// C doesn't have a native foreach function like C#, Python, etc.
// Let's make one

#include <stdio.h>

struct ListNode;
typedef struct ListNode {
	struct ListNode *next;
	struct ListNode *prev;
	void *value;
} ListNode;

typedef struct List {
	int count;
	ListNode *first;
	ListNode *last;
} List;

#define LIST_FOREACH(curr, list) \
	ListNode *curr = list->first;\
    for (ListNode *_node = list->first; \
         _node != NULL; \
         curr = _node = _node->next)

int main(int argc, char *argv[])
{
	List *lst;

	/* Fill the linked list */

	LIST_FOREACH(curr, lst)
	{
		printf("%d\n", (int)curr->value);
	}
}
