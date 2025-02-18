#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *first = NULL; 

void InsertOrder(int x)
{
    struct node *newnode = malloc(sizeof(struct node));  
    newnode->data = x;

    if (first == NULL) {
        newnode->next = NULL;
        first = newnode;
    }
    else if (newnode->data <= first->data) {
        newnode->next = first;
        first = newnode;
    }
    else {
        struct node *temp = first;
        while (temp->next != NULL && newnode->data > temp->next->data) {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void deleteOrder() {
    struct node *temp, *prev;
    temp = first;
    if (first == NULL) {
        printf("List is empty\n");
    } else {
        int x;
        printf("Enter value to delete node: ");
        scanf("%d", &x);
        
        if (first->data == x) {
            if (first->next == NULL) {
                first = NULL;
            } else {
                first = first->next;
            }
            free(temp);
        } else {
            while (temp != NULL && temp->data != x) {
                prev = temp;
                temp = temp->next;
            }

            if (temp == NULL) {
                printf("Node not found\n");
            } else {
                prev->next = temp->next;
                free(temp);
            }
        }
    }
}


void display()
{
    printf("Display data:\n");
    struct node *temp = first;
    if (first == NULL) {
        printf("Empty list\n");
    }
    else {
        while (temp != NULL) {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    int n = 0, n1;
    while (n != 4) {
        printf("1. Insert in order\n");
        printf("2. Delete in order\n");
        printf("3. Display\n");  
        scanf("%d", &n);    
        
        switch (n) {
            case 1:
                printf("Enter number to add in list:\n");
                scanf("%d", &n1);
                InsertOrder(n1);
                break;
            case 2:
                deleteOrder();
                break;
            case 3:
                display();
                break;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0; 
}

