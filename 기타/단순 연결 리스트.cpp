//응용과제 <단순 연결 리스트> 

#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct ListNode{
	element data;
	struct ListNode *link;
}ListNode;

void error(char *message){
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void insert_node(ListNode **phead, ListNode *p, ListNode *new_node){
	if(*phead == NULL){
		new_node->link = NULL;
		*phead = new_node;
	}
	else if(p == NULL){
		new_node->link = *phead;
		*phead = new_node;
	}
	else{
		new_node->link = p->link;
		p->link = new_node;
	}
}

void remove_node(ListNode **phead, ListNode *p, ListNode *removed){
	if(p == NULL){
		*phead = (*phead)->link;
	}
	else{
		p->link = removed->link;
	}
	free(removed);
}

void display(ListNode *head){
	ListNode *p = head;
	while(p!=NULL){
		printf("%d->", p->data);
		p = p->link;
	}
	printf("\n");
}

ListNode *search(ListNode *head, int x){
	ListNode *p;
	p = head;
	while(p!=NULL){
		if(p->data == x){
			return p;
		}
		p = p->link;
	}
	
	return p;
}

ListNode *concat(ListNode *head1, ListNode *head2){
	ListNode *p;
	if(head1 == NULL){
		return head2;
	}
	else if(head2 == NULL){
		return head1;
	}
	else{
		p = head1;
		while(p->link!=NULL){
			p = p->link;
		}
		p->link = head2;
		return head1;
	}
}

ListNode *concat2(ListNode *head1, ListNode *head2){
	ListNode *p;
	if(head2 == NULL){
		return head1;
	}
	else if(head1 == NULL){
		return head2;
	}
	else{
		p = head2;
		while(p->link!=NULL){
			p = p->link;
		}
		p->link = head1;
		return head2;
	}
}

ListNode *reverse(ListNode *head){
	ListNode *p, *q, *r;
	p = head;
	q = NULL;
	while(p!=NULL){
		r = q;
		q = p;
		p = p->link;
		q->link = r;
	}
	return q;
}

ListNode *create_node(element data, ListNode *link){
	ListNode *new_node;
	new_node = (ListNode *)malloc(sizeof(ListNode));
	
	if(new_node == NULL){
		error("메모리할당 에러\n");
	}
	new_node->data = data;
	new_node->link = link;
	return new_node;
}

int main()
{
	ListNode *list1 = NULL, *list2 = NULL;
	
	ListNode *p;
	
	//list1 = 30->20->10
	
	insert_node(&list1, NULL, create_node(10, NULL));
	insert_node(&list1, NULL, create_node(20, NULL));
	insert_node(&list1, NULL, create_node(30, NULL));
	display(list1);
	
	remove_node(&list1, NULL, list1);
	display(list1);
	insert_node(&list2, NULL, create_node(40, NULL));
	insert_node(&list2, NULL, create_node(50, NULL));
	insert_node(&list2, NULL, create_node(60, NULL));
	display(list2);
	
	list1 = concat(list1, list2);
	display(list1);
	
	list1 = reverse(list1);
	display(list1);
	
	p = search(list1, 50);
	printf("Search : %d\n", p->data);
}


//[INPUT]
//(없음)
//
//
//[OUTPUT]
//30->20->10->
//20->10->
//60->50->40->
//20->10->60->50->40->
//40->50->60->10->20->
//Search : 50
