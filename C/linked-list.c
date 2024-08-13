#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct LinkedList {
    Node* head;
    int size;
} LinkedList;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

LinkedList* createLinkedList() {
    LinkedList* list = (LinkedList*)malloc(sizeof(LinkedList));
    list->head = NULL;
    list->size = 0;
    return list;
}

void addFirst(LinkedList* list, int data) {
    Node* newNode = createNode(data);
    newNode->next = list->head;
    list->head = newNode;
    list->size++;
}

void addLast(LinkedList* list, int data) {
    Node* newNode = createNode(data);
    if (list->head == NULL) {
        list->head = newNode;
    } else {
        Node* temp = list->head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    list->size++;
}

int removeFirst(LinkedList* list) {
    if (list->head == NULL) {
        return -10000;
    }

    Node* temp = list->head;
    int data = temp->data;
    list->head = list->head->next;
    free(temp);
    list->size--;
    return data;
}

int removeLast(LinkedList* list) {
    if (list->head == NULL) {
        return -10000; 
    }

    Node* temp = list->head;
    if (list->head->next == NULL) {
        int data = list->head->data;
        free(list->head);
        list->head = NULL;
        list->size--;
        return data;
    }

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    int data = temp->next->data;
    free(temp->next);
    temp->next = NULL;
    list->size--;
    return data;
}

int size(LinkedList* list) {
    return list->size;
}

bool isEmpty(LinkedList* list) {
    return list->head == NULL;
}

void testLinkedList() {
    LinkedList* list = createLinkedList();
    
    addFirst(list, 10);
    addLast(list, 20);
    addFirst(list, 5);

    assert(isEmpty(list) == false);
    assert(size(list) == 3);
    
    assert(removeFirst(list) == 5);
    assert(size(list) == 2);
    
    assert(removeLast(list) == 20);
    assert(size(list) == 1);
    
    assert(removeFirst(list) == 10);
    assert(isEmpty(list) == true);
    assert(size(list) == 0);

    free(list); 
}

int main() {
    testLinkedList();
    printf("All tests passed.\n");
    return 0;
}
