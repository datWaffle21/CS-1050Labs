#include <stdio.h>
#include <stdlib.h>

struct node {
    int value; // the value
    struct node* next; // pointer to the next node
};
typedef struct node node_t; //renames "struct node" -> node_t. shortens the name

void printList(node_t* head);
node_t* addElement(int val, int index, node_t* head);

void printList(node_t* head) {
    node_t* temp = head;

    while(temp != NULL) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

//returns a pointer to the node at the index, given the head of the list
node_t* getNodeAtIndex(int index, node_t* head) {
    int i = 0;
    node_t* temp = head;

    while(i < index) {
        i++;
        temp = temp->next;
    }
    return temp;
}

//returns a new head if created.. otherwise returns the head given
node_t* addElement(int val, int index, node_t* head) {

    //if the list does not yet exist.
    if(head == NULL) {
        node_t* newNode = malloc(1 * sizeof(node_t));
        newNode->value = val;
        newNode->next = NULL;
        return newNode;
    }

    // if its the end of the array
    if(getNodeAtIndex(index, head) == NULL) {
        node_t* newNode = malloc(1 * sizeof(node_t));
        node_t* prevNode = getNodeAtIndex(index - 1, head);

        newNode->value = val;

        prevNode->next = newNode;
        newNode->next = NULL;
        return head;
    }

    //if its the beginning of the array
    if(getNodeAtIndex(index, head) == head) {
        node_t* newNode = malloc(1 * sizeof(node_t));
        node_t* nextNode = getNodeAtIndex(index, head);

        newNode->value = val;

        head = newNode;
        newNode->next = nextNode;

        return head;
    }

    //if its in the middle of the array

    node_t* newNode = malloc(1 * sizeof(node_t));
    newNode->value = val;

    //get the previous and next nodes

    node_t* nextNode = getNodeAtIndex(index, head);
    node_t* prevNode = getNodeAtIndex(index - 1, head);

    // repoint the list
    prevNode->next = newNode;
    newNode->next = nextNode;
    return head;
}    

int main(void) {

    node_t n1, n2, n3; // 3 element linked list
    node_t* head; //pointer variable to the head of the list

    n1.value = 1;
    n2.value = 2;
    n3.value = 3;

    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    node_t* test = getNodeAtIndex(1, head);

    printList(head);

    //if adding a new head to the array, you must assign the new head here.
    // i.e. -> head = addElement(x, 0, head);

    //val, index, head
    addElement(0, 3, head);

    //show changed array
    printList(head);

    return 0;
}