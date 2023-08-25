#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* mergeLists(struct Node* list1, struct Node* list2) {
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;

    struct Node* mergedList = NULL;

    if (list1->data <= list2->data) {
        mergedList = list1;
        mergedList->next = mergeLists(list1->next, list2);
    } else {
        mergedList = list2;
        mergedList->next = mergeLists(list1, list2->next);
    }

    return mergedList;
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* list1 = NULL;
    struct Node* list2 = NULL;

    int num, data;

    printf("Enter the number of elements for list 1: ");
    scanf("%d", &num);

    printf("Enter the elements for list 1: ");
    for (int i = 0; i < num; i++) {
        scanf("%d", &data);
        if (list1 == NULL) {
            list1 = createNode(data);
        } else {
            struct Node* newNode = createNode(data);
            newNode->next = list1;
            list1 = newNode;
        }
    }

    printf("Enter the number of elements for list 2: ");
    scanf("%d", &num);

    printf("Enter the elements for list 2: ");
    for (int i = 0; i < num; i++) {
        scanf("%d", &data);
        if (list2 == NULL) {
            list2 = createNode(data);
        } else {
            struct Node* newNode = createNode(data);
            newNode->next = list2;
            list2 = newNode;
        }
    }

    printf("List 1: ");
    printList(list1);

    printf("List 2: ");
    printList(list2);

    struct Node* mergedList = mergeLists(list1, list2);

    printf("Merged List: ");
    printList(mergedList);

    return 0;
}

