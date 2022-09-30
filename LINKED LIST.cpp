#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *first;
void create(int a[], int n){
struct node *newNode,*last;
first = (struct node*)malloc(sizeof(struct node));
first->data=a[0];
first->next=NULL;
last = first;
for(int i = 1;i<n;i++){
newNode = (struct node*)malloc(sizeof(struct node));
newNode->data = a[i];
newNode->next = NULL;
last->next = newNode;
last = newNode;
}
}
void insert_begin(int x){
struct node *newNode = (struct node*)malloc(sizeof(struct node));
newNode->data = x;
newNode->next = first;
first = newNode;
}
void insert_middle(int x, int pos){
int count = 0;
struct node *p = first;
struct node *newNode = (struct node*)malloc(sizeof(struct node));
newNode->data = x;
while(count <= pos-1){
p = p->next;
count++;
}
newNode->next = p->next;
p->next = newNode;
}
void insert_end(int x){
struct node *p = first;
struct node *newNode = (struct node*)malloc(sizeof(struct node));
newNode->data = x;
while(p->next != NULL){
p = p->next;
}
p->next = newNode;
newNode->next = NULL;
}
void delete_begin(){
struct node *p = first;
printf("Element Deleted : %d",first->data);
first = first->next;
free(p);
}
void delete_middle(int pos){
int count = 1;
struct node *p,*q = NULL;
p = first;
while(count<pos-1){
q = p;
p = p->next;
count++;
}
q->next = p->next;
printf("Element Deleted : %d ", p->data);
free(p);
}
void delete_end(){
struct node *p = first;
struct node *q = NULL;
while(p->next != NULL){
q = p;
p = p->next;
}
printf("Element Deleted : %d", p->data);
q->next = NULL;
free(p);
}
void display(struct node *p){
while(p != NULL){
printf("%d\t",p->data);
p = p->next;
}
}
int main(){
int ch,x,pos;
int size;
printf("Initial LL size : ");
scanf("%d", &size);
int arr[size];
printf("Enter Elements : ");
for(int i = 0;i<size;i++){
scanf("%d", &arr[i]);
}
create(arr,size);
printf("\nLL Created\n");
printf("Choices Available : \n");
while(1){
printf("\n2.Insert-Beginning \n3.Insert-Middle \n4.Insert-End \n5.Delete-Beginning \n6.DeleteMiddle \n7.Delete-End \n8.Display \n");
printf("Enter Choice : ");
scanf("%d", &ch);
switch(ch){
case 2:
printf("Enter Element to Insert : ");
scanf("%d",&x);
insert_begin(x);
break;
case 3:
printf("Enter Element to Insert : ");
scanf("%d",&x);
printf("Enter Position : ");
scanf("%d", &pos);
insert_middle(x,pos);
break;
case 4:
printf("Enter Element to Insert : ");
scanf("%d",&x);
insert_end(x);
break;
case 5:
delete_begin();
break;
case 6:
printf("Enter Positon to Delete : ");
scanf("%d",&pos);
delete_middle(pos);
break;
case 7:
delete_end();
break;
case 8:
printf("Current LL : \n");
display(first);
printf("\n");
break;
}
}
}

