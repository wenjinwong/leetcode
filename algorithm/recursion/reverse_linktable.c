/*
 * 
 * 2019年12月 4日 星期三 18时08分13秒 CST
 *
 */
#include<stdio.h>
typedef struct node{
	int date;
	struct node* next;
}Node;

Node* reverseList(Node* head) { /* Utilized to reverse the link table */
	if(head == 0 ||head->next == 0) {
		return head;
	}
	Node* newList = reverseList(head->next);
	Node *t1 = head->next;
	t1->next = head;
	head->next = 0;
	return newList;
}

int main() {
	Node* head;
	Node n1,n2,n3;
	n1.date = 1;
	n1.next = &n2;
	n2.date = 2;
	n2.next = &n3;
	n3.date = 3;
	n3.next = 0;
	head = &n1;
	Node *new2 = reverseList(head);
	printf("%d", new2->date);
	return 0;
}
