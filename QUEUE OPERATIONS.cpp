#include<stdio.h>
int front,rear;
int size;
void enque(int q[]){
if(rear == size - 1){
printf("Queue is FULL. Insertion not possible.");
}
else{
int x;
printf("Enter Element to Enque : " );
scanf("%d", &x);
rear = rear + 1;
//front = front + 1;
q[rear] = x;
}
}
void deque(int q[]){
if( front == rear && rear == -1){
printf("Stack is EMPTY. Deque not possible.");
}
else{
printf("Dequed element : %d ", q[front+1]);
front = front + 1;
}
}
void display(int q[]){
if(front == -1 && rear == -1){
printf("Queue is Empty. Displaying not possible\n");
}
else{
printf("Current Queue : \n");
for(int i = front + 1;i<=rear;i++){
printf("%d\t", q[i]);
}
}
}
int main(){
printf("Enter Size : ");
scanf("%d", &size);
int queue[size],choice;
printf("\nOperations Available \n");
printf("1. Enque \n2. Deque \n3. Display");
while(1){
printf("\nEnter Choice : ");
scanf("%d", &choice);
switch(choice){
case 1:
enque(queue);
break;
case 2:
deque(queue);
break;
case 3:
display(queue);
break;
default:
printf("Invalid Choice. \n");
}
}
}

