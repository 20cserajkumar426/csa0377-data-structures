#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
} *head = NULL, *p, *t, *newnode;
void create()
{
    int x, n, i;
    printf("Enter the n\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the value\n");
        scanf("%d", &x);
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = x;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
            p = newnode;
        }
        else
        {
            for (p = head; p->next != NULL; p = p->next)
                ;
            p->next = newnode;
            p = newnode;
        }
    }
}
void display()
{
    if (head == NULL)
        printf("Linked list is Empty\n");
    else
    {
        for (p = head; p != NULL; p = p->next)
        {
            printf("%d->", p->data);
        }
    }
}
void insert_begin()
{
    int x;
    printf("Enter the value\n");
    scanf("%d", &x);
    newnode = (struct node *)malloc(sizeof(struct node *));
    newnode->data = x;
    newnode->next = NULL;
    p = head;
    head = newnode;
    newnode->next = p;
    p = newnode;
}
void insert_end()
{
    int x;
    printf("Enter the value\n");
    scanf("%d", &x);
    newnode = (struct node *)malloc(sizeof(struct node *));
    newnode->data = x;
    newnode->next = NULL;
    for (p = head; p->next != NULL; p = p->next)
        ;
    p->next = newnode;
    p = newnode;
}
void insert_pos()
{
    int x, pos, i;
    printf("Enter the value\n");
    scanf("%d", &x);
    printf("Enter the position");
    scanf("%d", &pos);
    newnode = (struct node *)malloc(sizeof(struct node *));
    newnode->data = x;
    newnode->next = NULL;
    for (p = head, i = 1; i < pos; i++, p = p->next)
        t = p;
    t->next = newnode;
    newnode->next = p;
}
void delete_begin()
{
    p = head;
    head = p->next;
    free(p);
}
void delete_end()
{
    for (p = head; p->next != NULL; p = p->next)
        t = p;
    t->next = NULL;
    free(p);
}
void delete_pos()
{
    int i,pos;
    printf("Enter the position\n");
    scanf("%d",&pos);
    for (p = head, i = 1; i < pos; i++, p = p->next)
        t = p;
    t->next = p->next;
}
int main()
{
    int choice;
    do
    {
        printf("\n******Main menu****\n");
        printf("1.Create \n2.Display\n3.Insertion at begin \n4.Insertion at end \n5.Insertion at any Positon \n6.Delete at begin\n7.Delete at end \n8.Delete at any position \n9.Exit\n \n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert_begin();
            break;
        case 4:
            insert_end();
            break;
        case 5:
            insert_pos();
            break;
        case 6:
            delete_begin();
            break;
        case 7:
            delete_end();
            break;
        case 8:
            delete_pos();
            break;
        case 9:
            exit(0);
            break;
        default:
            printf("Enter valid Input");
            break;
        }
    } while (choice > 0 && choice < 10);
    return 0;
}
